#include "main.h"

/**
 * print_o - prints an octal number.
 * @v: arguments.
 * Return: count
 */
int print_o(va_list v)
{
	int i;
	int *array;
	int count = 0;
	unsigned int num = va_arg(v, unsigned int);
	unsigned int tem = num;

	while (num / 8 != 0)
	{
		num /= 8;
		count++;
	}
	count++;
	array = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		array[i] = tem % 8;
		tem /= 8;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(array[i] + '0');
	}
	free(array);
	return (count);
}
