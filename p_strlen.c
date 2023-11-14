#include "main.h"

/**
 * _strlens - finds the length of a string
 * @s: string
 * Return: integer
 */
int _strlens(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}
/**
 * _strlen_c - finds length of a string but for constant characters
 * @s: string
 * Return: integer
 */

int _strlen_c(const char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}
