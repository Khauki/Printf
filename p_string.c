#include "main.h"

/**
 * p_string - prints string
 * @v: parameter
 * Return: integer
 */
int p_string(va_list v)
{
	char *s;
	int i, length = 0;
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
			length = length + 2;
			value = s[i];
			if (value < 16)
			{
				_putchar('0');
				length++;
			}
			length = length + print_hexadecimal(value);
		}
		else
		{
			_putchar(s[i]);
			length++;
		}
	}
	return (length);
}

