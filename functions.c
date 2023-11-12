#include "main.h"

<<<<<<< HEAD
/**
 * c_printer - prints a character
 * @printer: argument list
 *
 * Return: number of characters printed
 */
int c_printer(va_list printer)
{
	c = va_arg(printer, int);
	buffer[y] = c;
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
	s = va_arg(printer, char *);
	
	if (s == NULL)
	{
		s = "(null)";
	}
	while (*s != '\0')
	{
		buffer[y] = *s;
		printno++;
		y++;
		s++;
	}
	return (printno);
}

/**
 * p_printer - prints the % symbol
 * @printer: argument list
 *
 * Return: number of characters printed
 */
int p_printer(va_list printer)
{
	buffer[y] = '%';
	return (1);
}
