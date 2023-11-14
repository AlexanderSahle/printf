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
	unsigned int a, str_len,  all = 0;
	va_list elements;

	va_start(elements, format);

	for (a = 0; format[a] != '\0'; a++)
	{
		if (format[a] != '%')
		{
			ax_putchr(format[a]);
		}

		else if (format[a + 1] == 'c')
		{
			ax_putchr(va_arg(elements, int));
			a++;
		}

		else if (format[a + 1] == 's')
		{
			str_len = ax_puts(va_arg(elements, char*));
			a++;
			all += (str_len - 1);
		}

		else if (format[a + 1] == '%')
		{
			ax_putchr('%');
		}
		all += 1;
	}
	va_end(elements);
	return (all);
}
