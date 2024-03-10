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
	{x++;
		if (format[x] == 'c')
		{
			ch = va_arg(p, int);
			_putchar(ch);
			q++;
			i--;
			if ((format[x + 1]) == '\0')
			{
				/*printf("i--(%d)--\n", i);*/
				break;
			}
			
		}
		else if (format[x] == 's')
		{
			s = va_arg(p, char *);
			if (s == NULL)
			{
				k = roo("(null)");
				r = r + k;
				i--;
			}
			else
			{
			k = roo(s);
			/*printf("k--(%d)--\n", k);*/
			_putchar('\0');
			r = r + k;
			i--;
			}
		/*write(1, s, (1 + strlen(s)));*/
			if ((format[x + 1]) == '\0')
			{
				break;
			}
			i--;
		}
	}
	else
_putchar(format[x]);
i++;
/*write(1, &format[x], 1);*/
x++;
/*printf("--(%d)--\n", i);*/
}


va_end(p);
/*printf("(i)--%d--(r)--%d--(q)--%d--\n", i, r, q);*/
i++;
return (i + r + q);
}
