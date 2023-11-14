#include "main.h"

/**
 * _pointer - prints an hexdecimal number.
 * @v: arguments
 * Return: counter
 */
int _pointer(va_list v)
{
	void *p;
	char *s = "(nil)";
	long int x;
	int y;
	int i;

	p = va_arg(v, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	x = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	y = print_hexadecimal(x);
	return (y + 2);
}
