# C Preprocessor Loop Project

This is a small C practice project focused on learning how loops and the C preprocessor work together.

The main idea of this project is to split the program into different sections (“pages”) and control which part runs during compilation using macros like `#ifdef`.

---

## What this project is about

This project demonstrates:

- Using `for` loops in different ways
- Controlling code execution with `#ifdef` / `#ifndef`
- Including external `.c` files using `#include`
- Compile-time code selection using macros

---

## How it works

Instead of having one fixed program, the code is divided into multiple parts (pages).  
Each page runs only if a specific macro is defined when compiling the program.

Examples of macros used:
- `enr`
- `out`
- `both`

---

## How to run the project
`
gcc example08.c -o e08
./e08
