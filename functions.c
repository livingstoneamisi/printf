#include "main.h"

/**
 * c_printer - prints a character
 * @printer: argument list
 *
 * Return: number of characters printed
 */
int c_printer(va_list printer)
{
	char c = va_arg(printer, int);

	write(1, &c, 1);
	return (1);
}

/**
 * s_printer - prints a string
 * @printer: argument list
 *
 * Return: number of characters printed
 */
int s_printer(va_list printer)
{
	char *s = va_arg(printer, char *);
	int printno;

	if (s == NULL)
	{
		s = "(null)";
	}
	while (*s != '\0')
	{
		write(1, s, 1);
		s++;
		printno++;
	}
	return (printno);
}

/**
 * p_printer - prints the % symbol
 * @printer: argument
 *
 * Return: number of characters printed
 */
int p_printer(va_list printer)
{
	(void)printer;
	write(1, "%", 1);
	return (1);
}
