#include "main.h"
#include <stdarg.h>

/**
 * print_char - Prints a single char to the screen and returns the length
 * @ap: Pointer to the variadic list
 * @buffer: Pointer to the buffer for _putchar
 *
 * Return: The length of the printed char (should be 1)
 */

int print_char(va_list ap, local_buffer *buffer)
{
	_putchar(va_arg(ap, int), buffer);
	return (1);
}
