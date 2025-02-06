# 📢 | ft_printf

Welcome to the **ft_printf** project! This is a custom implementation of the famous `printf` function from the C standard library. It's designed as part of the **42 School Curriculum**, focusing on understanding variadic functions, handling edge cases, and mastering output formatting.

---

## 📖 | Table of Contents

1. [📚 About the Project](#-about-the-project)
2. [⚙️ Features](#%EF%B8%8F-features)
3. [🛠️ How It Works](#%EF%B8%8F-how-it-works)
4. [🚀 Usage](#-usage)
5. [🏗️ Supported Conversions](#%EF%B8%8F-supported-conversions)
6. [📊 Performance](#-performance)
7. [📸 Screenshots](#-screenshots)
8. [🙌 Acknowledgments](#-acknowledgments)

---

## 📚 | About the Project

The `ft_printf` project is a replica of the standard `printf` function, written in C from scratch. It showcases:
- 📜 Mastery of **variadic functions**.
- 🛠️ Handling complex **format specifiers**.
- 🚦 Robust error handling and edge case management.

This project is a foundational exercise in understanding how low-level I/O operations work in C.

---

## ⚙️ | Features

- 🎯 Custom implementation of `printf`.
- 📊 Full support for common format specifiers.
- 💡 Extensible and modular codebase.
- 🧪 Thoroughly tested against edge cases.

---

## 🛠️ | How It Works

At its core, `ft_printf` leverages **variadic arguments** through `stdarg.h` to process an arbitrary number of inputs. The function parses the format string, detects specifiers, and calls appropriate handlers for output formatting.

### Example Breakdown:
```c
#include "ft_printf.h"

int main() {
    ft_printf("Hello %s, you are %d years old.\n", "Alice", 25);
    return (0);
}
```
---
## 🚀 | Usage

This section explains how to clone, build, and use the `ft_printf` library in your projects. Follow the steps below to integrate it into your work.

### 1️⃣ | Clone the Repository

Start by cloning the repository from GitHub:
```bash
git clone https://github.com/<your-username>/<your-repo-name>.git
cd <your-repo-name>
```
### 2️⃣ | Build the Library
Use the provided Makefile to compile the project and generate the static library file libftprintf.a:
```bash
make
```
This will compile all necessary files and create the library for linking.
---
### 3️⃣ | Include in Your Project

Add the ft_printf library to your C project. Include the header file in your code as shown below:
```c
#include "ft_printf.h"

int main() {
    ft_printf("This is a custom printf: %d\n", 42);
    return (0);
}
```
---
### 4️⃣ | Compile Your Program

When compiling your program, link the libftprintf.a static library. Example:

cc main.c libftprintf.a -o ft_printf

Replace main.c with the name of your source file(s).
---
### 5️⃣ | Run Your Program

Execute the compiled program:

./ft_printf

You should see the custom ft_printf output in the terminal.
---

Ensure you have a compatible Makefile in the root directory to simplify the build process.
---
### 🏗️ | Supported Conversions

    Characters: %c
    Strings: %s
    Integers: %d, %i
    Unsigned Integers: %u
    Hexadecimal: %x, %X
    Pointers: %p
    Percentage: %%

### 📊 | Performance

The implementation is optimized for:

    Memory efficiency.
    Output speed.
    Compatibility with edge cases (e.g., null pointers, invalid format strings).

### 🙌 | Acknowledgments

A huge thank you to:

    🏫 42 School for designing such challenging and rewarding projects.
    💻 Open-source contributors for inspiration and support.

### 🌟 | Final Notes

ft_printf is an exciting journey into the heart of C programming. It not only strengthens your grasp on low-level I/O but also pushes you to think about optimization and error handling.

Feel free to contribute, fork, or suggest improvements! 🚀
