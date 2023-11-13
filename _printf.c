#include "main.h"
/**
 * print_buffer - buffer handler
 * @buffer: actual buffer
 * @a: index of buffer
 * Return: number of characters printed
 */
int print_buffer(char *buffer, int *a)
{
	int b = 0;

	if (buffer == NULL || buffer[0] == '\0')
	{
		return (-1);
	}
	write(1, buffer, *a);
	b += *a;
	*a = 0;
	return (b);
}

/**
 * _printf - produces output according to a formet
 * @format: string
 *
 * Return: number of printer characters
 */
int _printf(const char *format, ...)
{
	va_list printer;
	int printno = 0, x = 0, y = 0;
	char buffer[BUFFERSIZE];
	int (*f)(va_list);

	if (format == NULL || format[0] == '\0')
	{
		return (-1);
	}
	va_start(printer, format);
	while (format[x] != '\0')
	{
		if (format[x] != '%')
		{
			buffer[y] = format[x];
			printno++;
			y++;
		}
		else
		{
			x++;
			f = function_get(&format[x]);
			if (f == NULL)
			{
				buffer[y] = '%';
				buffer[y + 1] = format[x];
				printno += 2;
				y += 2;
			}
			else
			{
				printno += f(printer);
				y += printno;
			}
		}
		x++;
	}
	printno += print_buffer(buffer, &y);
	va_end(printer);
	return (printno);
}
