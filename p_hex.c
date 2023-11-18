#include "main.h"

/**
 * p_h16_extra - a fun to print a hexdecimal No.
 *
 * @n: an unsigned intigeer to be printed
 *
 * Return: all.
 */

int p_h16_extra(unsigned long int n)
{
	long int a, *array;
	long int all = 0;
	unsigned long int t = n;

	while (n / 16 != 0)
	{
		n /= 16;
		all++;
	}
	all++;

	array = malloc(counter * sizeof(long int));

	for (a = 0; a < all; a++)
	{
		array[a] = t % 16;
		t = t / 16;
	}

	for (a = all - 1; a >=  0; a--)
	{
		if (array[a] > 9)
			array[a] = array[a] + 39;
		ax_putchr(array[a] + '0');
	}
	free(array);
	return (all);
}
