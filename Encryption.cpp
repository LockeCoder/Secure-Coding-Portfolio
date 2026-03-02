// Encryption.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cassert>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <ctime>
#include <string>

/// <summary>
/// Encrypt or decrypt a source string using the provided key.
/// Using the same key with this function a second time restores the original.
/// </summary>
/// <param name="source">Input string to process</param>
/// <param name="key">Key to use in encryption / decryption</param>
/// <returns>Transformed string</returns>
std::string encrypt_decrypt(const std::string& source, const std::string& key)
{
    const auto key_length = key.length();
    const auto source_length = source.length();

    // Assert that our input data is good.
    assert(key_length > 0);
    assert(source_length > 0);

    std::string output = source;

    // Loop through the source string char by char.
    for (size_t i = 0; i < source_length; ++i)
    {
        // XOR each character with the corresponding key character,
        // wrapping around the key using modulo.
        unsigned char src_ch = static_cast<unsigned char>(source[i]);
        unsigned char key_ch = static_cast<unsigned char>(key[i % key_length]);
        output[i] = static_cast<char>(src_ch ^ key_ch);
    }

    // Our output length must equal our source length.
    assert(output.length() == source_length);

    return output;
}

std::string read_file(const std::string& filename)
{
    std::ifstream in(filename);
    if (!in)
    {
        std::cerr << "Failed to open input file: " << filename << std::endl;
        return {};
    }

    std::ostringstream buffer;
    buffer << in.rdbuf();  // Read entire file into a string.
    return buffer.str();
}

std::string get_student_name(const std::string& string_data)
{
    std::string student_name;

    // Find the first newline.
    size_t pos = string_data.find('\n');
    if (pos != std::string::npos)
    {
        // Copy that substring as the student name.
        student_name = string_data.substr(0, pos);
    }

    return student_name;
}

void save_data_file(const std::string& filename,
    const std::string& student_name,
    const std::string& key,
    const std::string& data)
{
    std::ofstream out(filename);
    if (!out)
    {
        std::cerr << "Failed to open output file: " << filename << std::endl;
        return;
    }

    // Line 1: student name
    out << student_name << '\n';

    // Line 2: timestamp (yyyy-mm-dd)
    std::time_t t = std::time(nullptr);
    std::tm tm{};
#ifdef _WIN32
    localtime_s(&tm, &t);
#else
    tm = *std::localtime(&t);
#endif
    out << std::put_time(&tm, "%Y-%m-%d") << '\n';

    // Line 3: key used
    out << key << '\n';

    // Line 4+: data
    out << data;
}

int main()
{
    std::cout << "Encryption / Decryption Test!" << std::endl;

    // Input file format:
    // Line 1: <student name>
    // Line 2: <Lorem Ipsum Generator website used>
    // Lines 3+: <lorem ipsum text>

    const std::string file_name = "inputdatafile.txt";
    const std::string encrypted_file_name = "encrypteddatafile.txt";
    const std::string decrypted_file_name = "decrypteddatafile.txt";
    const std::string key = "password";

    const std::string source_string = read_file(file_name);
    if (source_string.empty())
    {
        std::cerr << "No data read from file. Exiting." << std::endl;
        return 1;
    }

    // Get the student name from the data file.
    const std::string student_name = get_student_name(source_string);

    // Encrypt source_string with key.
    const std::string encrypted_string = encrypt_decrypt(source_string, key);

    // Save encrypted_string to file.
    save_data_file(encrypted_file_name, student_name, key, encrypted_string);

    // Decrypt encrypted_string with key.
    const std::string decrypted_string = encrypt_decrypt(encrypted_string, key);

    // Save decrypted_string to file.
    save_data_file(decrypted_file_name, student_name, key, decrypted_string);

    std::cout << "Read File: " << file_name
        << " - Encrypted To: " << encrypted_file_name
        << " - Decrypted To: " << decrypted_file_name << std::endl;

    return 0;
}