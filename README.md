*This project has been created as part of the 42 curriculum by zaksu.*

# libft

## Description

**libft** is an extensive custom C library engineered to serve as a high-performance utility toolkit for low-level systems programming. Developed as the foundational milestone of the 42 curriculum, this project focuses on the rigorous reimplementaton of essential standard library functions and the architecture of custom data structure utilities. By abstracting away the dependency on high-level standard libraries, the project demonstrates a profound mastery of manual memory management, robust pointer arithmetic, and algorithmic optimization.

The library is architected for seamless integration into future complex software developments, serving as a strictly 42 Norm-compliant personal framework. Every function is implemented from scratch, ensuring zero reliance on restricted external dependencies while prioritizing robustness, code modularity, and execution efficiency.

## Instructions

### Requirements

* A Unix-based operating system (Linux or macOS)
* `cc` compiler
* `make`

### Compilation

To compile the library, run:

```bash
make
```

This will generate a static library named:

```text
libft.a
```

You may inspect the project's Makefile to identify the specific build targets and the output binary to be generated.

### Cleaning

To remove object files (" *.o "):

```bash
make clean
```

To remove object files and the static library (" libft.a "):

```bash
make fclean
```

To recompile everything :

```bash
make re
```

### Build Optimization

The **Makefile** is engineered to prevent unnecessary relinking. Compilation is only triggered if source files have been modified. You may inspect the project's **Makefile** to identify the specific build targets, dependency rules, and the output binary to be generated.

### Usage

Include the header file in your C project:

```c
#include "libft.h"
```

Compile your project with `libft.a`:

```bash
cc main.c libft.a
```

## Library Content

The **libft** library includes the following groups of functions:

### Part 1. Standard C Library Reimplementations

This module focuses on the rigorous reconstruction of essential functions from the standard Libc. These low-level utilities are engineered to handle byte-level memory operations and fundamental string analysis, ensuring a robust foundation for memory safety and data integrity.

* Character Classification & Transformation: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_tolower`, `ft_toupper`
* String Analysis & Manipulation: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`
* Byte-Level Memory Control: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
* Primitive Data Conversion & Allocation: `ft_atoi`, `ft_calloc`

### Part 2. Additional Utility Functions

This module provides higher-level abstractions engineered to simplify complex operations that are not directly available in the standard Libc. These functions facilitate efficient data processing, advanced string transformation, and robust I/O management through file descriptors.

* Advanced String Synthesis: `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`
* Numerical Representation: `ft_itoa` (Integer to ASCII conversion)
* Functional Programming Utilities: `ft_strmapi`, `ft_striteri` (Iterative mapping and transformation)
* File Descriptor I/O Streams: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### Part 3. Bonus: Linked List Functions

This module introduces a robust implementation of a singly linked list, enabling efficient dynamic data management. By utilizing a generic void * pointer for content, the library provides a versatile container that can store any data type, ensuring flexibility across various software architectures.

Structure Definition:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

List Utility Suite:

* Node Creation & Lifecycle: `ft_lstnew`, `ft_lstdelone`, `ft_lstclear`
* Sequence Manipulation: `ft_lstadd_front`, `ft_lstadd_back`
* Traversal & Analysis: `ft_lstsize`, `ft_lstlast`
* Functional Iteration: `ft_lstiter`, `ft_lstmap` (Applying logic across the entire sequence)

## Technical Choices

* Strict Norm Compliance: Every line of code is written in full accordance with the **42 Norm**, ensuring high readability and a standardized structure across the entire library.
* Manual Memory Management: Dynamic memory allocation is rigorously audited to prevent memory leaks. Each allocation is paired with corresponding deallocation logic, and system calls are protected with immediate NULL-guard checks to ensure stability under low-resource conditions.
* Edge Case Resilience: The library is engineered to be crash-proof by explicitly handling boundary conditions, including NULL pointer inputs, empty strings, and potential integer overflows.
* Modular Architecture: Each function is designed as a standalone unit with minimal internal dependencies, maximizing reusability and making the library a flexible foundation for future systems-level projects.

## Resources

### References

* Linux manual pages (`man 3 malloc`, `man 3 memcpy`, etc.) extensive use of section 3 manuals to verify POSIX-compliant behavior.
* cppreference C Library Documentation
* The C Programming Language – Brian W. Kernighan & Dennis M. Ritchie (The "K&R" Standard).
* GNU C Library Documentation

### AI Usage & Academic Integrity

In alignment with the 42 AI Policy, artificial intelligence tools were utilized exclusively as a pedagogical aid and technical consultant. The project maintains full academic integrity, as AI was never used for direct code generation or copying. Specifically, AI served the following purposes:

* Clarifying the underlying behavior and historical context of complex standard Libc functions.
* Identifying subtle edge cases and undefined behaviors to ensure robust error mitigation.
* Reviewing manual logic flows during debugging sessions to identify conceptual bottlenecks and improve algorithmic efficiency.
* Enhancing code legibility, modularity, and adherence to professional software engineering documentation standards.

All final source code was manually authored, tested, and verified by zaksu to ensure 100% compliance with the 42 Norm and project-specific constraints.

## Additional Information

This project is conceived as an evolving architectural foundation for the 42 common core. It is designed to be iteratively expanded, adapting to the increasing complexity of future challenges in systems programming and software engineering. Mastery of this library signifies more than just functional completion; it reflects a rigorous understanding of low-level C paradigms, efficient memory management, and the ability to build robust, scalable software from the ground up.
