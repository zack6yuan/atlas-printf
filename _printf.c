#include <stdarg.h>
#include <stdio.h>
/**
 * _printf - manual printf fucntion
 * @format: char str composed of zero or more directives
 * Return: number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
	int counter = 0;
	va_list args;

	if (format == NULL)
	{
		return (-1);
	}	
	va_start(args, format);

	for (const char *s = format; *s != '\0'; s++)
	{
		if (*s != '%')
		{
			putchar(*s);
			counter ++;
		}		
		else
		{
			s++;
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
					putchar('%');
					counter++;
					break;
				}
			}
		}
	va_end(args);
	return (counter);
