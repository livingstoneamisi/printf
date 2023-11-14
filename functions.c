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

/**
 * i_printer - prints an integer
 * @printer: argument list
 *
 * Return: number of characters printed
 */
int i_printer(va_list printer)
{
	int a = va_arg(printer, int);
	int b = count_digit(a);
	int num = 0, tmp = a;
	char c;

	if (a < 0)
	{
		num += write_char('-');
		tmp = -tmp;
	}
	while (b > 0)
	{
		c = (tmp / power(10, b - 1) + '0');
		num += write_char(c);
		tmp %= power(10, b - 1);
		b--;
	}
	return (num);
}

/**
 * d_printer - prints an integer
 * @printer: argument list
 *
 * Return: number of characters printed
 */
int d_printer(va_list printer)
{
	int a = va_arg(printer, int);
	int b = count_digit(a);
	int num = 0, tmp = a;
	char c;

	if (a < 0)
	{
		num += write_char('-');
		tmp = -tmp;
	}
	while (b > 0)
	{
		c = (tmp / power(10, b - 1) + '0');
		num += write_char(c);
		tmp %= power(10, b - 1);
		b--;
	}
	return (num);
}	
