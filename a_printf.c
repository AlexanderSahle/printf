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
	unsigned int aleco = 0;
	va_list elements;

	if (format == NULL)
		return (-1);

	va_start(elements, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			aleco++;
		}

		else
		{
			format++;

			if (*format == '\0')
				break;
			if (*format == '%')
			{
				write(1, format, 1);
				aleco++;
			}

			else if (*format == 'c')
			{
				char c = va_arg(elements, int);

				write(1, &c, 1);
				aleco++;
			}

			else if (*format == 's')
			{
				char *str = va_arg(elements, char*);
				int str_len = 0;

				while (str[str_len] != '\0')
					str_len++;
				write(1, str, str_len);
				aleco += str_len;
			}
		}
		format++;
	}
	va_end(elements);
	return (aleco);
}
