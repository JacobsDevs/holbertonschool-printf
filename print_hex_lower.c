#include "main.h"

/**
 * print_hex_lower - Prints a hexadecimal number recursively.
 *
 * @ap: va_list passed into the function.
 * @buffer: Pointer to buffer for _putchar.
 *
 * Return: The length of the hexadecimal number.
 */

int print_hex_lower(va_list ap, local_buffer *buffer)
{
	unsigned int num = va_arg(ap, unsigned int);
	int len = 0;

	if (num == 0)
	{
		_putchar(num + '0', buffer);
		return (1);
	}
	len += print_hexlower_rec(num, buffer);

	return (len);
}

/**
 * print_hexlower_rec - Helper function to recursivley print
 *                      a hexidecimal number with lowercase letter.
 *
 * @num: Integer to print as hexadecimal.
 * @buffer: Pointer to buffer for _putchar.
 *
 * Return: The length of the hexdecimal number.
 */

int print_hexlower_rec(unsigned int num, local_buffer *buffer)
{
	int len = 0;
	unsigned int remainder;

	if (num / 16 != 0)
		len += print_hexlower_rec(num / 16, buffer);

	remainder = num % 16;

	if (remainder < 10)
		_putchar(remainder + '0', buffer);
	else
		_putchar(remainder - 10 + 'a', buffer);
	len++;

	return (len);
}
