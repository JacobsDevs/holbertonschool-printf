#include "main.h"
/**
 * print_percent - Prints a percent sign
 * @ap: a va_list passed to the function.
 * @buffer: Pointer to the buffer for _putchar
 *
 * Return: 1
 */
int print_percent(va_list ap, local_buffer *buffer)
{
	(void)ap;
	_putchar('%', buffer);
	return (1);
}
