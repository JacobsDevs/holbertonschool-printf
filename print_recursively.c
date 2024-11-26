#include "main.h"

/**
 * print_int_recursively - Recursively print digit by digit.
 *
 * @num: Number to print recursively.
 *
 * Return: The length of the digit.
 */

int print_int_recursively(int num)
{
	int len = 1;

	if (num / 10 == 0)
	{
		_putchar(num + '0');
		return (1);
	}
	if (num / 10 > 0)
	{
		len += print_int_recursively(num / 10);
	
	}
		_putchar((num % 10) + '0');
		return (len);
}

