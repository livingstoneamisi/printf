#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFERSIZE 1024

int _printf(const char *format, ...);

/**
 * struct format - format structure
 * @specifier: format specifier
 * @f: pointer the associated function
 */
typedef struct format
{
	char *specifier;
	int (*f)(va_list);
}
format_t;

int c_printer(va_list);
int p_printer(va_list);
int s_printer(va_list);
int (*function_get(char *s))(va_list);

#endif
