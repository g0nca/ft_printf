# 📢 ft_printf

Welcome to the **ft_printf** project! This is a custom implementation of the famous `printf` function from the C standard library. It's designed as part of the **42 School Curriculum**, focusing on understanding variadic functions, handling edge cases, and mastering output formatting.

---

## 📖 Table of Contents

1. [📚 About the Project](#-about-the-project)
2. [⚙️ Features](#️-features)
3. [🛠️ How It Works](#️-how-it-works)
4. [🚀 Usage](#-usage)
5. [🏗️ Supported Conversions](#️-supported-conversions)
6. [📊 Performance](#-performance)
7. [📸 Screenshots](#-screenshots)
8. [🙌 Acknowledgments](#-acknowledgments)

---

## 📚 About the Project

The `ft_printf` project is a replica of the standard `printf` function, written in C from scratch. It showcases:
- 📜 Mastery of **variadic functions**.
- 🛠️ Handling complex **format specifiers**.
- 🚦 Robust error handling and edge case management.

This project is a foundational exercise in understanding how low-level I/O operations work in C.

---

## ⚙️ Features

- 🎯 Custom implementation of `printf`.
- 📊 Full support for common format specifiers.
- 💡 Extensible and modular codebase.
- 🧪 Thoroughly tested against edge cases.

---

## 🛠️ How It Works

At its core, `ft_printf` leverages **variadic arguments** through `stdarg.h` to process an arbitrary number of inputs. The function parses the format string, detects specifiers, and calls appropriate handlers for output formatting.

### Example Breakdown:
```c
ft_printf("Hello %s, you are %d years old.\n", "Alice", 25);


