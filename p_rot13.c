#include "main.h"

/**
 * p_rot13 - a fun to convert to rot13
 *
 * @elements: arg elements
 *
 * Return: all counts
 */

int p_rot13(va_list elements)
{
	int a, b, c, all = 0;
	char *str = va_arg(elements, char*);
	char io[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char jk[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (str == NULL)
		str = "(null)";

	for  (a = 0; str[a]; a++)
	{
		c = 0;

		for (b = 0; io[b] && !c; b++)
		{
			if (str[a] == io[b])
			{
				ax_putchr(jk[b]);
				all++;
				c = 1;
			}
		}

		if (!c)
		{
			ax_putchr(str[a]);
			all++;
		}
	}
	return (all);
}
