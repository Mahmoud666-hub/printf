#include"main.h"

/**
 * _printf - print anything
 * @format: parameter
 * Return: integer
*/

int _printf(const char *format, ...)
{
	int i = 0, x = 0, r = 0, q = 0, k = 0;
	char *s = NULL;
	char ch;
	va_list p;

va_start(p, format);

while (format[x] != '\0')
{
	if (format[x] == '%')
	{
		if (format[x + 1] == 'c')
		{
			ch = va_arg(p, int);
			_putchar(ch);
			
			if ((format[x + 2]) == '\0')
			{
				i++;
				/*printf("i--(%d)--\n", i);*/
				break;
			}
			q++;
			x++;
		}
		else if (format[x + 1] == 's')
		{
			s = va_arg(p, char *);
			k = roo(s);
			_putchar('\0');
		/*write(1, s, (1 + strlen(s)));*/
			if ((format[x + 2]) == '\0')
			{
				i = i + k;
				break;
			}
			r = k;
			x++;
		}
		x++;
	}

_putchar(format[x]);
/*write(1, &format[x], 1);*/

x++;
i++;
}


va_end(p);
/*printf("(i)--%d--(r)--%d--(q)--%d\n", i, r, q);*/
return (i + r + q);
}
