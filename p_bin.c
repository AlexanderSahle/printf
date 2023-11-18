#include "main.h"

/**
 * p_bin - a fun that prints binary No.
 *
 * @elements: a parameter
 *
 * Return: int
 */

int p_bin(va_list elements)
{
	int flag = 0;
	int all = 0;
	int a, x = 1, y;
	unsigned int n = va_arg(elements, unsigned int);
	unsigned int p;

	for (a = 0; a < 32; a++)
	{
		p = ((x << (31 - a)) & n);

		if (p >> (31 - a))
			flag = 1;

		if (flag)
		{
			y = p >> (31 - a);
			ax_putchr(y + 48);
			all++;
		}
	}

	if (all == 0)
	{
		all++;
		ax_putchr('0');
	}
	return (all);
}
