#include "main.h"

/**
 * print_binary - Prints a binary number recursively.
 *
 * @ap: va_list passed into the function.
 *
 * Return: The length of the binary number.
 */

int print_binary(va_list ap, local_buffer *buffer)
{
	unsigned int num = va_arg(ap, unsigned int);
	int len = 0;

	if (num == 0)
	{
		_putchar(num + '0', buffer);
		return (1);
	}
		len += print_binary_recursively(num, buffer);

	return (len);
}

/**
 * print_binary_recursively - Helper fucntion to recursivley
 *                            print a number in binary.
 *
 * @num: Input integer to print in binary.
 *
 * Return: The length of the binary number.
 */

int print_binary_recursively(unsigned int num, local_buffer *buffer)
{
	int len = 0;

	if (num / 2 != 0)
	{
		len += print_binary_recursively(num / 2, buffer);
	}
	_putchar((num % 2) + '0', buffer);
	len++;

	return (len);
}
