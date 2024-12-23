#include "main.h"

/**
 * print_string - Prints a string from va_list
 *
 * @ap: A va_list passed to the function.
 * @buffer: Pointer to the buffer for _putchar
 *
 * Return: The length of the string.
 */

int print_string(va_list ap, local_buffer *buffer)
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
		_putchar(str[i], buffer);
		i++;
	}
	return (i);
}
