#include "practice.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <limits.h>

int _printf(const char *format, ...)
{
	va_list ptr;
	va_start(ptr, format);
	int len = strlen(format);
	puts(format);
	int i;

	for (i = 0; i < len; i++)
	{
		if (*(format + i) == '%' && *(format + i + 1) == 'c')
		{
			puts(va_arg(ptr, char *));
		}
		else if (*(format + i) == '%' && *(format + i + 1) == 's')
		{
			puts(va_arg(ptr, char*));
		}
		va_end(ptr);
	}
	return (len);
}
