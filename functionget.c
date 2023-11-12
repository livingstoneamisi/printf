#include "main.h"

/**
 * function_get - return pointer to function
 * @s: pointer to format string
 *
 * Return: pointer to appropriate function
 */
int (*function_get(char *s))(va_list)
{
	format_t formats[] = {
		{"c", c_printer},
		{"s", s_printer},
		{"%", p_printer},
		{NULL, NULL}
	};
	int = 0;
	while (formats[i].specifier != NULL)
	{
		if (strcmp(s, formats[i].specifier) == 0)
		{
			return (formats[i].f);
		}
		i++;
	}
	return (NULL);
}
