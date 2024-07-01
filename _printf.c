#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - manual printf function
 * @format: char string composed of zero or more directives
 * Return: number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
    int counter = 0; // Counter for characters printed
    va_list args; // Handles variable arguments
    const char *s;

    if (format == NULL) // If NULL, return -1
    {
        return (-1);
    }

    va_start(args, format); // Initialize args and format

    for (s = format; *s != '\0'; s++) // Iterate through format string
    {
        if (*s != '%') // If char is not '%', print and continue
        {
            putchar(*s);
            counter++;
        }
        else
        {
            s++; // Move to next character

            if (*s == '\0')
            {
                putchar('%');
                counter++;
                break;
            }

            switch (*s)
            {
                case 'c': // Print character
                    {
                        putchar(va_arg(args, int));
                        counter++;
                        break;
                    }
                case 's': // Print string
                    {
                        char *str = va_arg(args, char*);
                        while (*str)
                        {
                            putchar(*str);
                            str++;
                            counter++;
                        }
                        break;
                    }
                case '%': // Print '%' symbol
                    {
                        if (*s == '\0') // Check if '%' is last char
                        {
                            putchar('%');
                            counter++;
                            break;
                        }
                        putchar('%');
                        counter++;
                        break;
                    }
            }
        }
    }

    va_end(args);
    return (counter);
}

