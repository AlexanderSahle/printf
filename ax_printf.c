#include "main.h"

/**
 * _printf - a Custom_printf function
 *
 * @format: the format specifier
 *
 * Return: 0 at success
 */

int _printf(const char *format, ...)
{
	unsigned int a, str_len, all = 0;
	va_list elements;

	va_start(elements, format);

convert p[] = {
		{"%s", print_s}, {"%c", print_c},
		{"%%", print_37},
		{"%i", print_i}, {"%d", print_d}, {"%r", print_revs},
		{"%R", print_rot13}, {"%b", print_bin},
		{"%u", print_unsigned},
		{"%o", print_oct}, {"%x", print_hex}, {"%X", print_HEX},
		{"%S", print_exc_string}, {"%p", print_pointer}
	};


	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[a] != '\0')
	{
	b = 13;
		while (b >= 0)
		{
			if (p[b].ph[0] == format[a] && p[b].ph[1] == format[a + 1])
			{
				length += p[j].function(elements);
				a = a + 2;
				goto Here;
			}
			b--;
		}
		ax_putchr(format[a]);
		str_len++;
		a++;
	}
	va_end(elements);
	return (srr_len);
}
