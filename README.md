# 🔢 Number Checker

![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)
![Platform](https://img.shields.io/badge/platform-cross--platform-brightgreen?style=for-the-badge)
![License](https://img.shields.io/badge/license-MIT-blue?style=for-the-badge)

A simple yet educational C program that determines whether a given number is odd or even using the modulo operator.

## 📋 Table of Contents

- [About](#-about)
- [Features](#-features)
- [Getting Started](#-getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
- [Usage](#-usage)
- [Code Explanation](#-code-explanation)
- [Known Issues](#-known-issues)
- [Improvements](#-improvements)
- [Contributing](#-contributing)
- [Learning Objectives](#-learning-objectives)
- [License](#-license)

## 🎯 About

This project demonstrates fundamental C programming concepts including:
- Basic input/output operations
- Conditional statements
- Modulo arithmetic
- Integer handling

Perfect for beginners learning C programming and understanding odd/even number logic.

## ✨ Features

- ✅ Interactive console input
- ✅ Immediate odd/even classification
- ✅ Simple and clean output
- ✅ Lightweight and fast execution
- ✅ Educational code structure

## 🚀 Getting Started

### Prerequisites

- GCC compiler or any C compiler
- Terminal/Command prompt access

### Installation

1. **Clone the repository**
   ```bash
   git clone https://github.com/0PKunal/number_checker.git
   cd number_checker
   ```

2. **Compile the program**
   ```bash
   gcc number_checker.c -o number_checker
   ```

3. **Run the executable**
   ```bash
   ./number_checker        # On Linux/macOS
   number_checker.exe      # On Windows
   ```

## 💻 Usage

1. Run the program
2. Enter any integer when prompted
3. The program will display whether the number is odd or even

**Example:**
```
$ ./number_checker
Enter a number: 42
42 is a even number.
```

## 🔍 Code Explanation

The program uses the modulo operator (`%`) to determine if a number is divisible by 2:

- **Even numbers**: `number % 2 == 0` (remainder is 0)
- **Odd numbers**: `number % 2 != 0` (remainder is 1)

### Key Components:

- `scanf("%d", &num)`: Reads integer input from user
- `num % 2 == 0`: Checks if number is divisible by 2
- `printf()`: Displays the result to console

## ⚠️ Known Issues

**Bug Alert**: The current code has a logical error where the output messages are reversed:

```c
if (num % 2 == 0) 
    printf("%d is a odd number.\n", num);    // Should say "even"
else 
    printf("%d is a even number.\n", num);   // Should say "odd"
```

**Fix**: Swap the printf statements or change the condition logic.

## 🛠️ Improvements

Here are some suggested enhancements:

### High Priority
- [ ] Fix the logical error in odd/even determination
- [ ] Add input validation for non-integer inputs
- [ ] Handle buffer overflow protection

### Medium Priority
- [ ] Add support for negative numbers
- [ ] Implement error handling for invalid inputs
- [ ] Add command-line argument support

### Low Priority
- [ ] Create a version that processes multiple numbers
- [ ] Add colored output for better visibility
- [ ] Include unit tests

### Enhanced Version Example:
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    char buffer[100];
    
    printf("Enter a number: ");
    
    if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        num = atoi(buffer);
        
        if (num % 2 == 0) {
            printf("%d is an even number.\n", num);
        } else {
            printf("%d is an odd number.\n", num);
        }
    } else {
        printf("Error reading input.\n");
        return 1;
    }
    
    return 0;
}
```

## 🤝 Contributing

Contributions are welcome! Here's how you can help:

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/improvement`)
3. Fix the known issues or add enhancements
4. Commit your changes (`git commit -am 'Add some improvement'`)
5. Push to the branch (`git push origin feature/improvement`)
6. Open a Pull Request

## 📚 Learning Objectives

After studying this code, you should understand:

- **Basic C syntax** and program structure
- **Input/Output operations** using `scanf()` and `printf()`
- **Conditional statements** with `if-else`
- **Modulo operator** and its applications
- **Integer data types** and variable declaration
- **Common debugging** practices in C programming

## 📊 Project Statistics

| Metric | Value |
|--------|--------|
| Lines of Code | 13 |
| Functions | 1 |
| Variables | 1 |
| Libraries Used | stdio.h |
| Complexity | Low |

## 🏷️ Tags

`c-programming` `beginner-friendly` `educational` `odd-even` `console-application` `mathematics`

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

**📝 Note**: This is a learning project. The code intentionally contains a common beginner mistake to demonstrate debugging skills. See the [Known Issues](#-known-issues) section for details.

**🌟 Star this repository** if you found it helpful for learning C programming!

---
*Happy Coding! 🚀*

---

*This README was generated by AI, it's may have some mistake's.*
