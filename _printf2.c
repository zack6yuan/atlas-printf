#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * _printf - manual printf function that handles "d and i"
 * @format: char string composed of zero or more directives
 * Return: number of characters printed (excluding the null byte)
 */
int _printf(const char *format)
{
	int counter = 0; /*counter for characters printed*/
	va_list args; /*handles varibale arguments*/
	const char *s;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(args, format);

	for (s = format; s != '\0'; s++)
	 {
        if (*s != '%') /*If char is not '%', print and continue*/
        {
            putchar(*s);
            counter++;
        }
        else
        {
            s++; /*Move to next character*/

            if (*s == '\0')
            {
                putchar('%');
                counter++;
                break;
            }

            switch (*s)
            {
		    case 'd': /*print signed integer*/
			    {
				    int value = (va_arg(args, int);
				    printf("%d", value);
				    counter++;
				    break;
			    }
	            case 'i': /*print unsigned integer*/
			    {
				    unsigned int value = va_arg(args, unsigned int);
				    printf("%i", value);
				    counter++;
				    break;
		 	    }
	    }
	}
	va_end(args);
	return (counter);
}

