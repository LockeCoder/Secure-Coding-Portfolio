# Secure Coding Portfolio

SNHU CS-405 Secure Coding portfolio repository. This repo contains written course artifacts, static analysis results, and C++ project source code used to demonstrate secure coding practices and security-focused development workflows.

## Project Value

This portfolio demonstrates secure coding concepts through written analysis, static code review, C++ source inspection, encryption exercises, and security-focused documentation. It shows experience with identifying insecure coding patterns, documenting risk, using static analysis tools, and applying secure development practices in a coursework environment.

## Demo Video

[Demo video](https://www.youtube.com/watch?v=svkgT7fPG4w)

## Contents

### Writing and Documentation

- Portfolio reflection / journal
- Security policy template
- Static code analysis write-up
- Presentation artifacts

### Code Projects

#### QuestionableCode: Static Analysis with Cppcheck and Visual Studio

- Visual Studio solution and project files
- `QuestionableCode.cpp`
- `cppcheck_results.xml` saved Cppcheck results

#### M5 Encryption: C++ File Encryption Exercise

- Visual Studio solution and project files
- `Encryption.cpp`
- Sample files:
  - `inputdatafile.txt`
  - `encrypteddatafile.txt`
  - `decrypteddatafile.txt`

## Suggested Repository Layout

A future cleanup could organize the repository into this structure:

    .
    ├── docs/
    ├── presentation/
    ├── analysis/
    └── projects/
        ├── questionable-code/
        └── m5-encryption/

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

- `cppcheck_results.xml` stores Cppcheck output for review.
- If static analysis is re-run, updated results should be saved separately from source code, preferably in an `analysis/` folder.

## Repository Hygiene

Do not commit Visual Studio build outputs, cache files, or user-specific artifacts. These should be ignored through `.gitignore`:

- `.vs/`
- `*.suo`
- `*.db`
- `*.ipch`
- `*.obj`
- `*.pdb`
- `Debug/`
- `Release/`
- `x64/`

## Academic Integrity

This repository contains my own coursework artifacts and evidence of my secure coding process, including analysis, revisions, and results. Any future reuse should follow SNHU academic integrity expectations and include proper citation where required.
