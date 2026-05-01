# Secure Coding Portfolio

SNHU CS-405 Secure Coding portfolio repository. This repository contains written course artifacts, static analysis results, C++ source code, Visual Studio project files, sample encryption input/output files, and presentation materials used to demonstrate secure coding practices and security-focused development workflows.

## Project Overview

This portfolio demonstrates secure coding concepts through written analysis, static code review, C++ source inspection, encryption exercises, security policy documentation, and presentation artifacts.

The work focuses on identifying insecure coding patterns, documenting risk, using static analysis tools, applying secure development practices, and explaining software security decisions in a coursework environment.

## Demo Video

[Demo video](https://www.youtube.com/watch?v=svkgT7fPG4w)

## Repository Contents

This repository currently uses a flat-file structure, with all project files stored in the repository root.

### Writing and Documentation

- `Portfolio Reflection.docx`: Portfolio reflection / journal artifact
- `CS 405 Security Policy Template.docx`: Security policy documentation
- `Static Code Analysis.docx`: Static code analysis write-up
- `Encryption Coding.docx`: Encryption assignment documentation
- `Presentation.docx`: Presentation-related written artifact
- `CS 405 Project Two Presentation Template.pptx`: Presentation artifact

### Static Analysis Project

- `QuestionableCode.cpp`: C++ source file used for static analysis review
- `QuestionableCode.sln`: Visual Studio solution file
- `QuestionableCode.vcxproj`: Visual Studio project file
- `QuestionableCode.vcxproj.filters`: Visual Studio project filters
- `cppcheck_results.xml`: Saved Cppcheck static analysis results

### Encryption Project

- `Encryption.cpp`: C++ file encryption/decryption exercise
- `M5_Encryption.sln`: Visual Studio solution file
- `M5_Encryption.vcxproj`: Visual Studio project file
- `M5_Encryption.vcxproj.filters`: Visual Studio project filters
- `inputdatafile.txt`: Sample input data
- `encrypteddatafile.txt`: Sample encrypted output
- `decrypteddatafile.txt`: Sample decrypted output

### Repository Files

- `.gitignore`: Visual Studio/C++ ignore rules
- `README.md`: Repository documentation
- `LICENSE`: Repository license

## Code Projects

### QuestionableCode: Static Analysis with Cppcheck and Visual Studio

This project uses intentionally questionable C++ code to compare warnings and findings between Visual Studio and Cppcheck. The goal was to identify issues detected by static analysis tools, classify risk, and document findings that may not appear during normal compilation.

The project demonstrates:

- Static code analysis
- Cppcheck usage
- Visual Studio warning review
- Risk identification
- Secure coding awareness
- Documentation of analysis results

### M5 Encryption: C++ File Encryption Exercise

This project demonstrates a basic C++ file encryption/decryption workflow. It reads input data, applies an encryption/decryption routine, and writes encrypted and decrypted output files.

The project demonstrates:

- File input/output in C++
- Basic encryption/decryption workflow
- Data transformation
- Output validation
- Secure coding discussion
- Documentation of encryption-related behavior

## Build and Run

### Requirements

- Visual Studio on Windows
- C++17 or newer

### Steps

1. Open the solution for the project you want to run:
   - `QuestionableCode.sln`
   - `M5_Encryption.sln`
2. Select `Debug` or `Release`.
3. Build the solution.
4. Run the project.

## Static Analysis Notes

- `cppcheck_results.xml` stores saved Cppcheck output for review.
- `QuestionableCode.cpp` is intended for static analysis and contains intentionally questionable patterns.
- Visual Studio and Cppcheck may report different warnings or risks.
- Static analysis results should be reviewed alongside the written analysis artifact.

## Repository Hygiene

This repository currently uses a flat-file structure. A future cleanup could organize files into folders such as:

```text
.
├── docs/
├── presentation/
├── analysis/
└── projects/
    ├── questionable-code/
    └── m5-encryption/
```

Visual Studio build outputs, cache files, and user-specific artifacts should not be committed. These should be ignored through `.gitignore`, including:

- `.vs/`
- `*.suo`
- `*.db`
- `*.ipch`
- `*.obj`
- `*.pdb`
- `Debug/`
- `Release/`
- `x64/`

The following files are local Visual Studio/cache artifacts and should be removed from the repository if they are still present:

- `Browse.VC.db`
- `DocumentLayout.json`
- `DocumentLayout.backup.json`

## Skills Demonstrated

- C++ programming
- Secure coding practices
- Static code analysis
- Cppcheck usage
- Visual Studio project workflow
- File input/output
- Encryption/decryption workflow
- Security policy documentation
- Risk identification
- Technical writing
- Portfolio reflection
- Software security communication

## Project Value

This portfolio shows the ability to evaluate code for security concerns, document risk, use static analysis tooling, work with C++ source files, explain secure coding concepts, and connect technical findings to written security documentation.

It is strongest for roles involving software engineering, cybersecurity, application security, QA/testing, technical support, and secure software development.

## Academic Integrity

This repository contains my own coursework artifacts and evidence of my secure coding process, including analysis, revisions, and results. Any future reuse should follow SNHU academic integrity expectations and include proper citation where required.
