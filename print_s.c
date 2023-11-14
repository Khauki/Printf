#include "main.h"

/**
 * print_string - print string
 * @v: parameter
 * Return: integer
 */

int print_string(va_list v)
{
	char *s;
	int i, leng = 0;
	int value;

	s = va_arg(v, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			leng = leng + 2;
			value = s[i];
			if (value < 16)
			{
				_putchar('0');
				leng++;
			}
			leng = leng + print_hex2(value);
		}
		else
		{
			_putchar(s[i]);
			leng++;
		}
	}
	return (leng);
}
