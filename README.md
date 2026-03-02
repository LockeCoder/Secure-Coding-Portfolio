# Secure-Coding-Portfolio

SNHU CS-405 (Secure Coding) portfolio repository. This repo contains written course artifacts, static analysis results, and C++ project source code used to demonstrate secure coding practices and security-focused development workflows.

## Contents

### Writing and Documentation (`docs/`)
- **Portfolio Reflection / Journal** (Word)
- **Security Policy Template** (Word)
- **Static Code Analysis Write-Up** (Word)
- **Presentation Artifacts** (PowerPoint/Word)

### Code Projects (`projects/`)

#### QuestionableCode (Static Analysis with Cppcheck + Visual Studio)
- Visual Studio solution and project files
- `QuestionableCode.cpp`
- `cppcheck_results.xml` (saved Cppcheck results)

#### M5 Encryption (C++ File Encryption Exercise)
- Visual Studio solution and project files
- `Encryption.cpp`
- Sample files:
  - `inputdatafile.txt`
  - `encrypteddatafile.txt`
  - `decrypteddatafile.txt`

## Suggested Repository Layout

This layout is recommended for a clean, professional structure:

docs/
presentation/
analysis/
projects/
questionable-code/
m5-encryption/


## Build and Run (Visual Studio)

### Requirements
- Visual Studio (Windows)
- C++17 or newer

### Steps
1. Open the solution for the project you want to run:
   - `QuestionableCode.sln`
   - `M5_Encryption.sln`
2. Select `Debug` or `Release`
3. Build the solution
4. Run the project

## Static Analysis Notes
- `cppcheck_results.xml` stores Cppcheck output for review.
- If you re-run analysis, save updated outputs in `analysis/` to keep results separate from source code.

## Repo Hygiene (Important)

Do **not** commit Visual Studio build or user-specific artifacts. Ensure these are ignored (via `.gitignore`):

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
This repository contains my own coursework artifacts and evidence of process (analysis, revisions, and results). If reused later, it should be properly cited and remain consistent with SNHU academic integrity expectations.
