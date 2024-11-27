#include "main.h"

/**
 * print_unsigned_recursively - Recursively print digit by digit.
 *
 * @num: Number to print recursively.
 * @buffer: Pointer to the buffer for _putchar
 *
 * Return: The length of the digit.
 */

int print_unsigned_recursively(unsigned int num, local_buffer *buffer)
{
	int len = 0;

	if (num / 10 != 0)
	{
		len += print_unsigned_recursively(num / 10, buffer);
	}
	_putchar((num % 10) + '0', buffer);
	len++;

	return (len);
}
