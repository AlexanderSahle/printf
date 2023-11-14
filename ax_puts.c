#include "main.h"

/**
 * ax_puts - print a string
 *
 * @c: string
 *
 * Return: number of bytes of str
 */

int ax_puts(char *c)
{
	int count = 0;

	if (c)
	{
		for (count = 0; c[count] != '\0'; count++)
		{
			ax_putchr(c[count]);
		}
	}
	return (count);
}
