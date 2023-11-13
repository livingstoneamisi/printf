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
	int printno = 0, x, y = 0;
	char buffer[BUFFERSIZE];
	int (*f)(va_list);

	if (format == NULL || format[0] == '\0')
	{
		return (-1);
	}

	va_start(printer, format);

	for (x = 0; format[x] != '\0'; x++)
	{
		if (y >= BUFFERSIZE - 1)
		{
			buffer[BUFFERSIZE - 1] = '\0';
			write(1, buffer, y);
			y = 0;
		}

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
				y += 1;
			}
		}
	}
	if (y > 0)
	{
		buffer[y] = '\0';
		write(1, buffer, y);
	}
	va_end(printer);
	return (printno);
}
