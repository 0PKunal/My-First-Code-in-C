# My First Code in C

[![Language](https://img.shields.io/badge/language-C-blue)](https://github.com/0PKunal/My-First-Code-in-C)
[![License](https://img.shields.io/badge/license-MIT-green)](https://opensource.org/licenses/MIT)
[![Platform](https://img.shields.io/badge/platform-cross--platform-lightgrey)](https://github.com/0PKunal/My-First-Code-in-C)

A simple interactive C program that demonstrates basic user input and output operations. This project serves as an introduction to C programming fundamentals, showcasing variable declarations, standard I/O functions, and basic program structure.

## 📋 Table of Contents

- [Overview](#overview)
- [Features](#features)
- [Prerequisites](#prerequisites)
- [Installation](#installation)
- [Usage](#usage)
- [Code Structure](#code-structure)
- [Example Output](#example-output)
- [Technical Details](#technical-details)
- [Learning Objectives](#learning-objectives)
- [Potential Improvements](#potential-improvements)
- [Contributing](#contributing)
- [License](#license)

## 🔍 Overview

This repository contains a beginner-friendly C program (`name&age.c`) that interacts with users by collecting their personal information (name and age) and displaying a personalized greeting. The program demonstrates fundamental concepts in C programming including:

- Variable declaration and initialization
- Standard input/output operations
- String and integer data handling
- Basic program flow control

## ✨ Features

- **Interactive User Interface**: Prompts users for input in a conversational manner
- **Data Collection**: Safely handles both string (name) and integer (age) inputs
- **Personalized Output**: Displays a customized greeting message
- **Cross-Platform Compatibility**: Runs on any system with a C compiler
- **Educational Value**: Perfect for learning basic C programming concepts

## 📋 Prerequisites

Before running this program, ensure you have:

- **C Compiler**: GCC, Clang, or any C99-compatible compiler
- **Operating System**: Windows, macOS, or Linux
- **Basic Knowledge**: Elementary understanding of command-line interface

### System Requirements

| Component | Requirement |
|-----------|-------------|
| Compiler | C99 or later |
| Memory | Minimal (< 1MB) |
| Disk Space | < 10KB |
| OS | Any POSIX-compliant system |

## 🚀 Installation

### Method 1: Clone the Repository

```bash
# Clone the repository
git clone https://github.com/0PKunal/My-First-Code-in-C.git

# Navigate to the project directory
cd My-First-Code-in-C
```

### Method 2: Download Individual File

```bash
# Download the source file directly
curl -O https://raw.githubusercontent.com/0PKunal/My-First-Code-in-C/main/name%26age.c
```

## 🔧 Usage

### Compilation

Compile the program using your preferred C compiler:

```bash
# Using GCC
gcc -o name_age name\&age.c

# Using Clang
clang -o name_age name\&age.c

# With additional warnings (recommended for learning)
gcc -Wall -Wextra -o name_age name\&age.c
```

### Execution

Run the compiled program:

```bash
# Execute the program
./name_age

# On Windows
name_age.exe
```

### Interactive Session

Follow the program prompts:

1. Enter your name when prompted
2. Enter your age when prompted
3. View the personalized greeting

## 🏗️ Code Structure

```
My-First-Code-in-C/
├── README.md              # This file
├── name&age.c            # Main program source code
└── .gitignore            # Git ignore rules (optional)
```

### Program Architecture

```c
#include <stdio.h>         // Standard I/O library

int main() {               // Main function entry point
    char name[100];        // String buffer for name (100 chars)
    int age;              // Integer variable for age
    
    // Input collection phase
    printf("What is your name: ");
    scanf("%s", name);
    
    printf("What is your age: ");
    scanf("%d", &age);
    
    // Output generation phase
    printf("\nHi %s, you are now %d years old\n", name, age);
    
    return 0;             // Successful program termination
}
```

## 📊 Example Output

```
What is your name: Alice
What is your age: 25

Hi Alice, you are now 25 years old
```

### Various Input Scenarios

| Input Name | Input Age | Output |
|------------|-----------|---------|
| John | 30 | Hi John, you are now 30 years old |
| Sarah | 22 | Hi Sarah, you are now 22 years old |
| Mike | 45 | Hi Mike, you are now 45 years old |

## 🔬 Technical Details

### Function Analysis

| Function | Purpose | Parameters | Return |
|----------|---------|------------|---------|
| `printf()` | Formatted output | Format string + args | Number of chars printed |
| `scanf()` | Formatted input | Format string + addresses | Number of items read |
| `main()` | Program entry point | None | Integer status code |

### Memory Usage

- **Stack Memory**: ~104 bytes (100 for name array + 4 for age integer)
- **Heap Memory**: None allocated
- **Code Segment**: Minimal executable size (~1-2KB compiled)

### Standards Compliance

- **C Standard**: C99 compatible
- **POSIX Compliance**: Yes
- **Memory Safety**: Basic (no bounds checking)

## 🎯 Learning Objectives

This program helps beginners understand:

1. **Basic Syntax**: C program structure and syntax rules
2. **Data Types**: Character arrays (strings) and integers
3. **I/O Operations**: Reading from stdin and writing to stdout
4. **Memory Management**: Stack-based variable allocation
5. **Compilation Process**: Source to executable transformation

## 🔄 Potential Improvements

### Security Enhancements

```c
// Current (unsafe)
scanf("%s", name);

// Improved (safer)
scanf("%99s", name);  // Prevent buffer overflow
```

### Input Validation

```c
// Add age validation
if (age < 0 || age > 150) {
    printf("Please enter a valid age.\n");
    return 1;
}
```

### Multi-word Name Support

```c
// Support names with spaces
printf("What is your full name: ");
fgets(name, sizeof(name), stdin);
```

### Error Handling

```c
// Check scanf return value
if (scanf("%d", &age) != 1) {
    printf("Error: Invalid age format.\n");
    return 1;
}
```

## 🤝 Contributing

Contributions are welcome! Here's how you can help:

1. **Fork** the repository
2. **Create** a feature branch (`git checkout -b feature/improvement`)
3. **Commit** your changes (`git commit -am 'Add improvement'`)
4. **Push** to the branch (`git push origin feature/improvement`)
5. **Open** a Pull Request

### Contribution Guidelines

- Follow C99 standards
- Add comments for complex logic
- Test on multiple platforms
- Update documentation as needed

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## 📞 Contact

**Author**: 0PKunal  
**Repository**: [My-First-Code-in-C](https://github.com/0PKunal/My-First-Code-in-C)  
**Issues**: [GitHub Issues](https://github.com/0PKunal/My-First-Code-in-C/issues)

---

<div align="center">
  <strong>⭐ Star this repository if it helped you learn! ⭐</strong>
</div>

---

### 🏆 Project Stats

![GitHub repo size](https://img.shields.io/github/repo-size/0PKunal/My-First-Code-in-C)
![GitHub code size](https://img.shields.io/github/languages/code-size/0PKunal/My-First-Code-in-C)
![Lines of code](https://img.shields.io/tokei/lines/github/0PKunal/My-First-Code-in-C)

**Happy Coding! 🚀**
