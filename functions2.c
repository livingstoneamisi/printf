#include "main.h"

/**
 * write_char - writes character
 * @c: character
 *
 * Return: 1
 */
int write_char(char c)
{
	write(1, &c, 1);
	return (1);
}

/**
 * count_digit - determines digits in an integer
 * @i: actual integer
 *
 * Return: number of digits
 */
int count_digit(int i)
{
	unsigned int d = 0, u = (i < 0) ? -i : i;

	while (u != 0)
	{
		u /= 10;
		d++;
	}
	return (d);
}

/**
 * power - find power of an integer
 * @b: base
 * @ex: exponent
 *
 * Return: the power of integer
 */
int power(int b, int ex)
{
	int r = 1;

	while (ex > 0)
	{
		r *= b;
		ex--;
	}
	return (r);
}
