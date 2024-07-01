#include <stdarg.h>
#include <stdio.h>
/**
 * _printf - manual printf fucntion
 * @format: char str composed of zero or more directives
 * Return: number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
	int counter = 0; /*counter for characters printed*/
	va_list args; /*handles variable arguemnts*/

	if (format == NULL) /*if NULL, return -1*/
	{
		return (-1);
	}	
	va_start(args, format); /*initialize args and format*/

	const char *s;

	for (s = format; *s != '\0'; s++) /*iterates through format string*/
	{
		if (*s != '%') /*if char is not '%', print and continue*/
		{
			putchar(*s);
			counter ++;
		}		
		else
		{
			s++; /*moves to next character*/
			if (*s == '\0')
			{
				putchar('%');
				counter++;
				break;
			}
			switch (*s)
			{
				case 'c': /*print character*/
				{
					putchar(va_arg(args, int));
					counter++;
					break;
				}
				case 's': /*print string*/
				{
					char *str = va_arg(args, char*);
					while (*str)
					{
						putchar (*str);
						str++;
						counter++;
					}
					break;
				}
				case '%': /*print '%' symbol*/
				{
					if (*s == '\0') /*checks if '%' if last char*/
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

