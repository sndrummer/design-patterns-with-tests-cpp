# Design Patterns with Google Tests - C++

## How to set up Visual Studio

1. Follow the same pattern for setting up the output and intermediate directories that you have been:
    - OutPut Directory = `$(SolutionDir)bin\$(Platfrorm)\$(Configuration)\`
    - Intermediate Directory = `$(SolutionDir)bin\intermediates\$(Platfrorm)\$(Configuration)\`

2. Create a `src/` and `test/` directory
3. Place the test files in the `test/` dir and all your project files in the `src/` dir
---------------------------------------------------

## Google Test Setup
- Refer to https://github.com/google/googletest/blob/master/googletest/docs/primer.md

1. Go to C++ Project Configurations->General->Addition Include Directories, and then add `$(SolutionDir)src\`
2. All cpp files must have the `#include <pch.h>` at the top apparently... this is a solution for now
3. Now Create a Test file such as `TrollTests.cpp` in the test directory and make sure it inherits from ::Test::