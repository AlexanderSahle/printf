#include "main.h"

/**
 * p_string - a function to print string.
 *
 * @elements: parameteric elements
 *
 * Return: int No.
 */

int p_string(va_list elements)
{
	char *str;
	int a, val, str_len = 0;

	str = va_arg(elements, char *);

	if (str == NULL)
		str = "(null)";

	for (a = 0; str[a] != '\0'; a++)
	{
		if (str[a] < 32 || str[a] >= 127)
		{
			ax_putchr('\\');
			ax_putchr('x');
			str_len = str_len + 2;
			val = str[a];

			if (val < 16)
			{
				ax_putchr('0');
				str_len++;
			}
			str_len + str_len + p_H16_extra(val);
		}

		else
		{
			ax_putchr(str[a]);
			str_len++;
		}
	}
	return (str_len);
}

