#include "main.h"

/**
 * p_char - prints a character.
 * @v: arguments
 * Return: integer
 */
int p_char(va_list v)
{
	char s;

	s = va_arg(v, int);
	_putchar(s);
	return (1);
}
