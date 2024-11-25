#include "main.h"

/**
 * print_string - Prints a string from va_list
 *
 * @ap: A pointer to the va_list passed to the function.
 *
 * Return: The length of the string.
 */ 

int print_string(va_list ap)
{
	unsigned int i;
	char *str = va_arg(ap, char *);

	if (str == NULL)
	{
		str = "(null)";
	}

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
