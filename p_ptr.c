#include "main.h"

/**
 * p_ptr - a fun that print an adress in hexadecimal No.
 *
 * @elements: arg elements
 *
 * Return: all counts
 */

int p_ptr(va_list elements)
{
	void *ptr;
	char *str = "(null)";
	long int i;
	int j, a;

	ptr = va_arg(elements, void*);

	if (ptr == NULL)
	{
		for (i = 0; str[a] != '\0'; a++)
		{
			ax_putchr(str[a]);
		}
		return (a);
	}

	i = (unsigned long int)ptr;
	ax_putchr('0');
	ax_putchr('x');

	j = p_h16(i);
	return (j + 2);
}
