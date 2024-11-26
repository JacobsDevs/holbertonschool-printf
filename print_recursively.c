#include "main.h"

/**
 * print_int_recursively - Recursively print digit by digit.
 *
 * @num: Number to print recursively.
 *
 * Return: The length of the digit.
 */

int print_int_recursively(long int num)
{
	int len = 0;

	if (num / 10 != 0)
	{
		len += print_int_recursively(num / 10);
	}
	_putchar((num % 10) + '0');
	len++;

	return (len);
}
