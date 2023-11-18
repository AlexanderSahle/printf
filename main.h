#ifndef A_MAIN_H
#define A_MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
#include <stdlib.h>


/**
 * struct format - converter for printf
 * @ph: type char pointer of the specifier
 * @function: function for the conversion specifier
 *
 */

typedef struct format
{
	char *ph;
	int (*function)();
} convert;


int _printf(const char *format, ...);
int ax_putchr(char c);
int ax_puts(char *c);
int ax_putint(int i)
int *_strcpy(char *dest, char *src);
int p_ptr(va_list elements);
int p_unsigned(va_list elements);
int p_h16_extra(unsigned long int n);
int str_len(const char *str);
int p_H16_extra(unsigned int n);
int p_exc_string(va_list elements);
int p_H16(va_list elements);
int p_hex(va_list elements);
int p_oct(va_list elements);
int p_bin(va_list elements);
int p_revs(va_list elements);
int p_rot13(va_list elements);
int p_i(va_list elements);
int print_dec(va_list elements);
int _strlen(char *str);
int rev_string(char *str);
int print_37(void);
int p_char(va_list elements);
int p_string(va_list elements);

#endif
