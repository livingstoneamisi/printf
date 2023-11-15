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
	write(1, s, strlen(s));
	printno = strlen(s);
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
	int b = a, l = a % 10, d, i = 1, ex = 1;

	a = a / 10;
	b = a;

	if (l < 0)
	{
		write(1, "-", 1);
		b = -b;
		a = -a;
		l = -l;
		i++;
	}
	if (b > 0)
	{
		while (b / 10 != 0)
		{
			ex = ex * 10;
			b = b / 10;
		}
		b = a;
		while (ex > 0)
		{
			d = b / ex;
			d = d + '0';
			write(1, &d, 1);
			b = b - (d * ex);
			ex = ex / 10;
			i++;
		}
	}
	l = l + '0';
	write(1, &l, 1);
	return (i);
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
	int b = a, l = a % 10, d, i = 1, ex = 1;

	a = a / 10;
	b = a;

	if (l < 0)
	{
		write(1, "-", 1);
		b = -b;
		a = -a;
		l = -l;
		i++;
	}
	if (b > 0)
	{
		while (b / 10 != 0)
		{
			ex = ex * 10;
			b = b / 10;
		}
		b = a;
		while (ex > 0)
		{
			d = b / ex;
			d = d + '0';
			write(1, &d, 1);
			b = b - (d * ex);
			ex = ex / 10;
			i++;
		}
	}
	l = l + '0';
	write(1, &l, 1);
	return (i);
}
