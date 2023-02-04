#include "main.h"

int print_char(va_list ap)
{
    char c;
    c = va_arg(ap, int);

    return (_putchar(c));
}

int printi(va_list ap)
{
    int i = va_arg(ap, int);

    return (print_int(i));
}

int print_int(int i)
{
    int num;
    int count = 0;

    if (i < 0)
    {
        count += _putchar('-');
        num = i * -1;
    }
    else
    {
        num = i;
    }

    if (num >= 10)
        count += print_int(num / 10);

    count += _putchar((num % 10) + '0');

    return (count);
}

int print_string(va_list ap)
{
    char *str = va_arg(ap, char *);
    
    int i = 0;

    while (str[i])
    {
        _putchar(str[i]);
        i++;
    }
    return (i);
}
