# C - printf

Group project **"printf"** by Zack Yuan and Jose Oliva

## Authorized Functions and Macros

These are the functions / macros that we are allowed to use:

```bash
write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)
```

## Compilation

Our code will be compiled this way:

```bash
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```
## Task 0
**I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life**

Write a function that produces output according to a format.

Prototype: int _printf(const char *format, ...);

Returns: the number of characters printed (excluding the null byte used to end output to strings)

## Task 1
**Education is when you read the fine print. Experience is what you get if you don't**

Handle the following conversion specifiers: "d" "i"

You don’t have to handle the flag characters, field width, precision, or the length modifiers

## Task 3
**Create a man page for your function.**
