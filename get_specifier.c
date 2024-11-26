#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * get_specifier - Returns a function pointer to the approporiate
 * print function.
 * @s: The specifier character to find
 *
 * Return: A Pointer to the function to use to print
 */

int (*get_specifier(char s))(va_list ap)
{
	specifier_t specifier[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"i", print_integer},
		{"d", print_integer},
		{NULL, NULL}
	};
	int i = 0;

	while (specifier[i].spec != NULL && specifier[i].spec[0] != s)
	{
		i++;
	}
	return (specifier[i].func);
}
