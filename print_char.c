#include "main.h"
#include <stdarg.h>

/**
 * print_char - Prints a single char to the screen and returns the length
 * @ap: Pointer to the variadic list
 *
 * Return: The length of the printed char (should be 1)
 */

int print_char(va_list *ap)
{
	_putchar(va_arg(*ap, int));
	return (1);
}
