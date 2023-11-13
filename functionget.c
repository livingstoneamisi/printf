#include "main.h"

/**
 * function_get - return pointer to function
 * @s: pointer to format string
 *
 * Return: pointer to appropriate function
 */
int (*function_get(const char *s))(va_list)
{
	format_t formats[] = {
		{"c", c_printer},
		{"s", s_printer},
		{"%", p_printer},
		{"i", i_printer},
		{"d", d_printer}
	};
	int i = 0;

	while (formats[i].specifier != NULL)
	{
		if (*s == *formats[i].specifier)
		{
			return (formats[i].f);
		}
		i++;
	}
	return (NULL);
}
