#include "main.h"

/**
 * p_char - a Custom_printf function
 *
 * @elements: the arg elements
 *
 * Return: int at success
 */

int p_char(va_list elements)
{
	char c;

	c = va_arg(elements, int);

	ax_putchr(c);
	return (1);
}

/**
 * print_37 - prints the char %.
 *
 * Return: 1.
 */

int print_37(void)
{
	_putchar(37);
	return (1);
}
