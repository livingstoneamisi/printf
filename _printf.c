#include "main.h"

/**
 * _printf - produces output according to a formet
 * @format: string
 *
 * Return: number of printer characters
 */
int _printf(const char *format, ...)
{
	va_list printer;
	int printno = 0, x = 0;
	int (*f)(va_list);

	if (format == NULL || format[0] == '\0')
	{
		return (-1);
	}
	va_start(printer, format);
	while (format[x] != '\0')
	{
		if (format[x] == '%')
		{
			x++;
			f = function_get(&format[x]);
			if (f != NULL)
			{
				printno += f(printer);
			}
		}
		else
		{
			write(1, &format[x], 1);
			printno++;
		}
		x++;
	}
	va_end(printer);
	return (printno);
}
