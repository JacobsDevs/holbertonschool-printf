#include "main.h"
#include "stdarg.h"
/**
* print_pointer - prints a pointer to the standard out and returns its length
* @ap: va_list to read from
* @buffer: Pointer to the buffer for _putchar
*
* Return: The length of the integer that was printed
*/

int print_pointer(va_list ap, local_buffer *buffer)
{
	int len = 0;
	unsigned long addr = va_arg(ap, unsigned long);
	
	if (addr < 1)
		len += _printf("%s", "(nil)");
	else
	{
		len += _putchar('0', buffer);
		len += _putchar('x', buffer);
		len += print_ul_hexlower_rec(addr, buffer);
	}
	return (len);
}

/**
 * print_ul_hexlower_rec - Function to recursivley print a hexidecimal number
 * with lowercase letter.
 * @num: Unsigned long to print as hexadecimal.
 * @buffer: Pointer to buffer for _putchar.
 *
 * Return: The length of the hexdecimal number.
 */

int print_ul_hexlower_rec(unsigned long num, local_buffer *buffer)
{
	int len = 0;
	unsigned long remainder;

	if (num / 16 != 0)
		len += print_ul_hexlower_rec(num / 16, buffer);

	remainder = num % 16;

	if (remainder < 10)
		_putchar(remainder + '0', buffer);
	else
		_putchar(remainder - 10 + 'a', buffer);
	len++;

	return (len);
}

