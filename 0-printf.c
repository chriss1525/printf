#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
	va_list ptr;

	va_start(ptr, format);
	int i = 0;
	int j = 0;
	int len;
	char *str2 = NULL;

	/*printing items in *format*/
	while (*(format + i) != '\0')
	{
		if (*(format + i) != '%')
		{
			_putchar(format[i]);
		}
		else
		/*checking for specifiers*/
		{
			i++;
			if (*(format + i) == 'c')
			{
				_putchar(va_arg(ptr, int));
			}
			else if (*(format + i) == 's')
			{
				str2 = va_arg(ptr, char *);
				while (str2[j] != '\0')
				{
					_putchar(str2[j]);
					j++;
				}
			}
		}
		i++;
	}
	va_end(ptr);
	return (len);
}
