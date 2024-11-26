#include "main.h"

/**
 * print_integer - prints an integer to the screen and returns its length
 * @ap: va_list to read from
 *
 * Return: The length of the integer that was printed
 */

int print_integer(va_list ap)
{
	long int num = va_arg(ap, long int);
	int length = 0;

	if (num < 0)
	{
		_putchar('-');
		length++;
		num = num * -1;
	}
	length += print_int_recursively(num);

	return (length);
}
