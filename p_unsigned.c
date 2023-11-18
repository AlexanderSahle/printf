#include "main.h"

/**
 * p_unsigned - print int
 *
 * @elements: arg elements
 *
 * Return: int
 */

int p_unsigned(va_list elements)
{
	unsigned int n = va_arg(elements, unsigned int);
	int num, last = n % 10, a = 1, digit, exp = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		ax_putchr('-');
		num = -num;
		n = -n;
		last = -last;
		a++;
	}

	if (num > 0)
	{
		while (num / 10 != 0)
		{
			digit = num / exp;
			ax_putchr(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			a++;
		}
	}
	ax_putchr(last + '0');
	return (a);
}
