#include "main.h"

/**
 * p_revstr - a fun that print a reversed str
 *
 * @elements: type struct va_arg elemnts
 *
 * Return: string
 */
int p_revstr(va_list elements)
{
	char *str = va_arg(elements, char*);
	int a, b = 0;

	while (str == NULL)
		str = "(null)";
	while (str[b] != '\0')
		b++;
	for (a = b - 1; a >= 0; a--)
		ax_putchr(str[a]);
	return (b);
}

/**
 * str_len - print the string length.
 *
 * @str: string
 *
 * Return: an int.
 */

int str_len(char *str)
{
	int c;

	for (c = 0; str[c] != 0; c++)
		;
	return (c);
}

/**
 * str_len_const - constant charchter string length
 *
 * @str: string
 *
 * Return: integer
 */

int str_len_const(const char *str)
{
	int c;

	for (c = 0; str[c] != 0; c++)
			;
	return (c);
}
