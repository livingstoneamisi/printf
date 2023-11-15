#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	printf("Test 3: %d\n", _printf("This is a %% test with %s and %d.\n", "format specifiers", 123));
	printf("Test 4: %d\n", _printf("%%Consecutive %% percent %%%% signs.\n"));
	printf("Test 5: %d\n", _printf("Invalid specifier at the end: %z\n"));
	printf("Test 7: %d\n", _printf("Mixing text with %s, %c, and %i.\n", "format specifiers", 'X', 987));
	printf("Test 8: %d\n", _printf("Special characters: %c, %s\n", '$', "@#&*!"));

	return (0);
}
