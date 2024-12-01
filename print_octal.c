#include "main.h"

/**
 * print_octal - Prints an octal  number recursively.
 *
 * @ap: va_list passed into the function.
 * @buffer: Pointer to the buffer for _putchar.
 *
 * Return: The length of the octal number.
 */

int print_octal(va_list ap, local_buffer *buffer)
{
	unsigned int num = va_arg(ap, unsigned int);
	int len = 0;

	if (num == 0)
	{
		_putchar(num + '0', buffer);
		return (1);
	}
		len += print_octal_recursively(num, buffer);

	return (len);
}

/**
 * print_octal_recursively - Helper fucntion to recursivley
 *                            print an octal number.
 *
 * @num: Integer to print as octal.
 * @buffer: Pointer to the buffer for _putchar.
 *
 * Return: The length of the octal number.
 */

int print_octal_recursively(unsigned int num, local_buffer *buffer)
{
	int len = 0;

	if (num / 8 != 0)
	{
		len += print_octal_recursively(num / 8, buffer);
	}
	_putchar((num % 8) + '0', buffer);
	len++;

	return (len);
}
