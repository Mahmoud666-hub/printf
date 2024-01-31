#include"main.h"
/**
 * _printf - print anything
 * @format: parameter
 * Return: integer
*/
int _printf(const char *format, ...)
{int i = 0;
va_list p;
va_start(p, format);
while (*format)
{
if (*format == '%')
{format++;
if (*format == 'c')
{
char ch = va_arg(p, int);
putchar(ch);
format++;
}
else if (*format == 's')
{
char *ch = va_arg(p, char *);
puts(ch);
format++;
}
}
putchar(*format);
format++;
i++;
}
return (i);
}
