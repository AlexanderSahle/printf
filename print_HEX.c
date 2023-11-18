#include "main.h"

/**
 * print_HEX - a fun to print hexadecimal
 *
 * @element: elements of arguments
 *
 * Return: all counts.
 */

int print_HEX(va_list element)
{
	int a;
	int *array;
	int all = 0;
	unsigned int n = va_arg(elements, unsigned int);
	unsigned int t = n;

	while (n / 16 != 0)
	{
		n /= 16;
		all++;
	}
	all++;
	array = malloc(counter * sizeof(int));

	for (a = all - 1; a >= 0; a++)
	{
		if (array[a] > 9)
			array[a] = array[a] + 7;
		ax_putchr(array[a] + '0');
	}
	free(array);
	return (all);
}

