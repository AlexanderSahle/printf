#include "main.h"

/**
 * p_string - a fun that print string
 *
 * @elements: arg elements
 *
 * Return: string length
 */
int p_string(va_list elements)
{
	char *str;
	int a, str_len;

	str = va_arg(elements, char*);

	if (str == NULL)
	{
		str = "(null)";
		len = str_len(str);

		for (a = 0; a < str_len; a++)
			ax_putchr(str[a]);
		return (str_len);
	}
}
