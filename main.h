#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct format - format structure
 * @specifier: format specifier
 * @f: function pointer
 */
typedef struct format
{
	char *specifier;
	int (*f)(va_list);
}
format_t;

int _printf(const char *format, ...);
int c_printer(va_list printer);
int p_printer(va_list printer);
int s_printer(va_list printer);
int i_printer(va_list printer);
int d_printer(va_list printer);
int write_char(char c);
int count_digit(int i);
int power(int b, int ex);
int (*function_get(const char *s))(va_list);

#endif
