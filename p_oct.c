#include "main.h"

/**
 * p_oct - prints an octal number
 *
 * @elements: arg elements
 *
 * Return: all count.
 */

int p_oct(va_list elements)
{
	int a, *array, counter = 0;
	unsigned int n = va_arg(elements, unsigned int);
	unsigned int t = n;

	while (n / 8 != 0)
	{
		n /= 8;
		all++;
	}

	all++;
	array = malloc(all * sizeof(int));

	for (a = 0; a < all; a++;)
	{
		array[a] = t % 8;
		t /= 8;
	}

	for (a = all - 1; a >= 0; a--)
	{
		ax_putchr(array[a] + '0');
	}

	free(array);

	return (all);
}
