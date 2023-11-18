#include "main.h"

/**
 * p_H16_extra - a fun to print a hexdecimal No.
 *
 * @n: an unsigned intigeer to be printed
 *
 * Return: all.
 */

int p_H16_extra(unsigned int n)
{
	int a, array, all = 0;
	unsigned int t = n;

	while (n / 16 != 0)
	{
		n /= 16;
		all++;
	}

	all++;
	array = malloc(counter * sizeof(int));

	for (a = 0; a < all; a++)
	{
		array[a] = t % 16;
	}

	for (a = all - 1; a >=  0; a--)
	{
		if (array[a] > 9)
			array[a] = array[a] + 7;
		ax_putchr(array[a] + '0');
	}
	free(array);
	return (all);
}
