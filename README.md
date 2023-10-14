# Introduction

Welcome to my **Printf**: This is a custom implementation of the `printf` function for the C programming language!

## Overview

This Printf implementation is a powerful, versatile, and feature-rich function that aims to provide the same functionality as the standard `printf` in C, This function is designed to help beginner understand the nitty gritty and under the hood workings of the standard C `printf` funtion.
The aim is of this project is to add some customisation in this function to make it fun, while focusing on also making formatting and output easier and more efficient.

## manual or help

To get help on how to use the _printf function, you can read the function manual page from your terminal.
To do this kindly navigate to the project directory and run the command `man ./man_printf.3`

## Authorized functions and macros

For this _printf function, there were no usage of the C library function aside from the listed one below, this was done to encourage how the internal workings of the C library works and how to implement them.
To get help about on the use micros or authorized function below, use the command written inside the bracket after the function name.

write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)

## Key Features

- **Full Compatibility:** This Printf function is fully compatible with the standard C `printf` function.You can as well replace the native `printf` with this implemetation in your code to log output.

- **Advanced Formatting:** This project supports a wide range of format specifiers just as the native printf function, e.g  %c, %s, %d, %u, %x, %X, %f, and more.
This allows for formatting of various data types with precision and control.

- **Flags and Precision:** You can harness the power of formatting flags (e.g., '0', ' ', '#', '+', '-') and precision settings to tailor the output to your exact specifications.

- **Technical Documentation:** I provide comprehensive technical documentation to help you understand the internals of _Printf and how to use it effectively in your projects.

## Compilation

Your code will be compiled this way:
`$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c`

## Let's Get Started

We invite you to explore the _Printf and discover the difference it can make in your C programming projects. This README will guide you through installation, usage, and more. If you have questions or suggestions, please feel free to reach out – we're here to support your success with _Printf.
