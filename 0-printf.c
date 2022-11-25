#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * _printf - produces output accourding to format
 * @format: string, first argument
 * Return: length of format
 */

int _printf(const char *format, ...)
{
	va_list ptr;
	int i = 0;
	int j = 0;
	int len = 0;
	char *str2 = NULL;

	va_start(ptr, format);

	/*printing items in *format*/
	while (*(format + i) != '\0')
	{
		if (*(format + i) != '%')
		{
			_putchar(format[i]);
			len++;
		}
		else
		/*checking for specifiers*/
		{
			i++;
			if (*(format + i) == '%')
			{
				_putchar(format[i]);
				len++;
			}
			else if (*(format + i) == 'c')
			{
				_putchar(va_arg(ptr, int));
				len++;
			}
			else if (*(format + i) == 's')
			{
				str2 = va_arg(ptr, char *);

				while (str2[j] != '\0')
				{
					_putchar(str2[j]);
					j++;
					len++;
				}

				j = 0;
			}
		}
		i++;
	}
	va_end(ptr);
	return (len);
}
