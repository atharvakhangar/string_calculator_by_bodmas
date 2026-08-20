# String Calculator

## About Creator

> Before you read anything else, this is my first basic project. I don't know whether it is actually basic or moderate, but one thing I know is that I gave it my best.

I am **Atharva**, a pre-first-year student who hasn't started college yet.

I am learning programming by building projects and using them to improve my skills.

## About The Project

**String Calculator** is a mathematical calculator written in **C++** that takes mathematical expressions as strings, processes them, validates them, and calculates the result.

The main goal of this project was not just to make a calculator, but to learn how to work with strings, handle different types of input, build expression-processing logic, debug a multi-file C++ project, and learn tools such as **CMake** and **Git**.

## Features

* BODMAS-based expression solving
* Basic mathematical operations
* String-based mathematical expression processing
* Full-line expression solving
* Decimal number support
* Signed number support
* Handling of `-` signs in expressions
* Input validation
* Error handling
* Typo detection to a certain extent

## Example

### Basic Calculation

```text
Input:
68.1 - 18.5

Output:
49.6
```

### Signed Numbers

```text
Input:
-10 + 5

Output:
-5
```

### Full Expression

```text
Input:
[YOUR EXAMPLE HERE]

Output:
[YOUR OUTPUT HERE]
```

> The examples above are only demonstrations. More examples will be added as the calculator is further tested.

## How It Works

The calculator processes a mathematical expression through several stages.

### 1. Input

The user provides a mathematical expression as a string.

### 2. Validation

The expression is checked for invalid formats, incorrect operators, and other possible input errors.

### 3. Expression Processing

The program identifies numbers, operators, signs, and other parts of the expression.

### 4. Calculation

The appropriate mathematical operations are performed according to the supported expression rules.

### 5. Output

The final calculated result is displayed to the user.

## Implementation Status

### Core Calculator

* [x] Basic mathematical operations
* [x] String-based calculations
* [x] Full-line expression processing
* [x] BODMAS-based solving
* [x] Decimal number support
* [x] Signed number support
* [x] Handling of `-` signs

### Input & Error Handling

* [x] Input validation
* [x] Error handling
* [x] Typo detection to a certain extent

### Advanced Mathematics

* [ ] Power functions
* [ ] Trigonometric functions
* [ ] Logarithmic functions
* [ ] Other advanced mathematical functions

### Planned Improvements

* [ ] More advanced expression support
* [ ] Improved error messages
* [ ] More extensive testing
* [ ] Unit tests
* [ ] Additional mathematical functions

## Project Structure

```text
String-Calculator/
│
├── main.cpp
├── checks.cpp
├── mix.cpp
├── mix.h
├── basicmath.cpp
├── complex.cpp
├── unary-handler.cpp
├── CMakeLists.txt
└── README.md
```

### File Overview

| File                | Purpose                                          |
| ------------------- | ------------------------------------------------ |
| `main.cpp`          | Main entry point of the program                  |
| `checks.cpp`        | Handles input checking and validation            |
| `mix.cpp`           | Handles mixed function used nonrelative files    |
| `basicmath.cpp`     | Handles basic mathematical operations            |
| `complex.cpp`       | Handles complex-number-related calculations      |
| `unary-handler.cpp` | Handles unary operators and signed numbers       |
| `CMakeLists.txt`    | CMake build configuration                        |
| `README.md`         | Project documentation                            |

## Technologies Used

* **C++**
* **CMake**
* **Git**
* **GitHub**

## Requirements

To build this project, you need:

* A C++ compiler
* CMake
* A build system supported by CMake

The project was developed and tested using **g++** and **CMake**.

## Build & Run

This project uses **CMake** for building.

The source code and project structure are available in this repository for reference.

The project was developed and tested using **g++** and **CMake** on Windows.


## Error Handling

The calculator includes input validation and error handling to prevent invalid expressions from being processed incorrectly.

It attempts to detect problems such as:

* Invalid operator placement
* Invalid expression formats
* Incorrect use of signs
* Invalid numbers
* Other unsupported input patterns

The validation system is not intended to detect every possible typo, but it handles a range of invalid inputs supported by the current implementation.

## Limitations

This project is still a learning project and is not intended to be a complete replacement for a scientific calculator or mathematical parser.

Currently, it does not support:

* Power functions
* Trigonometric functions
* Logarithmic functions
* Many other advanced mathematical operations

More functionality may be added in future versions.

## What I Learned

Building this project helped me practice and understand:

* C++ strings and string manipulation
* Functions
* Header files
* Multiple source files
* Input validation
* Expression processing
* Error handling
* Signed numbers
* Debugging
* CMake
* Building multi-file C++ projects
* Git
* GitHub

One of the main things I learned from this project was that handling mathematical expressions as strings is considerably more complicated than simply performing mathematical operations. A large part of the project involved understanding the input, identifying operators and numbers, and handling different edge cases.

## Future Improvements

Some features I may add in future versions include:

* Power functions
* Trigonometric functions
* Logarithmic functions
* More advanced mathematical operations
* Better expression parsing
* Improved error messages
* More extensive automated testing
* Unit testing

## Development Notes

During development, I used several `cout` statements for debugging and tracing the program's execution.

Some of these debugging statements have been **commented out rather than deleted**. They are kept in the source code because they may be useful for future development, debugging, or modifying the calculator's internal logic.

These statements are not part of the normal program output.


## Status

**Completed as a learning project.**

The current version contains the core calculator functionality. Additional mathematical functions and improvements may be added in future versions.

## Author

**Atharva**

This project was created as part of my journey of learning C++ and software development.