#include "main.h"

/**
 * ax_putchr - print a character
 *
 * @c: charachter input
 *
 * Return: 1
 */

int ax_putchr(char c)
{
	return (write(1, &c, 1));
}
