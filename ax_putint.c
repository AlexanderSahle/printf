#include "main.h"

/**
 * ax_putint - print an integer
 *
 * @elements: elements of argumnet
 *
 * Return: number of characters printed
 */

int ax_putint(va_list elements)
{
	int i = va_arg(elements, int);
	int num, last = i % 10, digit, exp = 1;
	int j = 1;

	i = i / 10;
	num = 1;
	if (last < 0)
	{
		ax_putchr('-');
		num = -num;
		i = -i;
		last = -last;
		j++
	}

	if (num > 0)
	{
		while (num / 10 != '0')
		{
			exp = exp * 10;
			num = num / 10;
		}

		num = i;

		while (exp > 0)
		{
			digit = num / exp;
			ax_putchr(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			j++;
		}
	}
	ax_putchr(last + '0');

	return (j);
}

/**
 * print_dec - prints decimal
 *
 * @elements: agument elements to be printed
 *
 * Return: int
 */

int print_dec(va_list elements)
{
	int i = va_arg(elements, int);
	int num, digit;
	int last = i % 10;
	int j = 1, exp = 1;

	i = i / 10;
	num = 1;

	if (last < 0)
	{
		ax_putchr('-');
		num = -num;
		i = -i;
		last = -last;
		j++
	}
	if (num > 0)
	{
		while (num / 10 != '0')
		{
			exp = exp * 10;
			num = num / 10;
		}

		num = i;
		while (exp > 0)
		{
			digit = num / exp;
			ax_putchr(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			j++;
		}
	}
	ax_putchr(last + '0');
	return (j);
}
