#include "main.h"

/**
 * print_unsignd - Prints an unsigned  number recursively.
 *
 * @ap: va_list passed into the function.
 * @buffer: Pointer to the buffer for _putchar.
 *
 * Return: The length of the unsigned number.
 */

int print_unsignd(va_list ap, local_buffer *buffer)
{
	unsigned int num = va_arg(ap, unsigned int);
	int len = 0;

	if (num == 0)
	{
		_putchar(num + '0', buffer);
		return (1);
	}
		len += print_unsignd_recursively(num, buffer);

	return (len);
}

/**
 * print_unsignd_recursively - Helper function to print an unsigned
 *                             number recursively.
 *
 * @num: Unsigned interger to print recursively.
 * @buffer: Pointer to the buffer for _putchar.
 * Return: The length of the unsigned number.
 */

int print_unsignd_recursively(unsigned int num, local_buffer *buffer)
{
	int len = 0;

	if (num / 10 != 0)
		len += print_unsignd_recursively(num / 10, buffer);

	_putchar((num % 10) + '0', buffer);
	len++;

	return (len);
}
