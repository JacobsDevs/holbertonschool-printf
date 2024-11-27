#include "main.h"
#include <limits.h>
/**
 * print_integer - prints an integer to the screen and returns its length
 * @ap: va_list to read from
 * @buffer: Pointer to the buffer for _putchar
 *
 * Return: The length of the integer that was printed
 */

int print_integer(va_list ap, local_buffer *buffer)
{
	int num = va_arg(ap, int);
	int length = 0;
	int int_max = INT_MAX;
	unsigned int int_min_as_positive = int_max + 1;

	if (num == INT_MIN)
	{
		_putchar('-', buffer);
		length++;
		length += print_unsigned_recursively(int_min_as_positive, buffer);
	}
	else if (num < 0)
	{
		_putchar('-', buffer);
		length++;
		num = num * -1;
		length += print_int_recursively(num, buffer);
	}
	else
	length += print_int_recursively(num, buffer);

	return (length);
}
