#include "main.h"
/**
 * print_custom_string - Prints just printable characters
 * @ap: Argument list containing the string.
 * @buffer: pointer to the local buffer.
 *
 * Return: Number of characters printed.
 */
int print_custom_string(va_list ap, local_buffer *buffer)
{
	char *str = va_arg(ap, char *);
	int len = 0;
	int i = 0;

	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
		{
			char hex[2];
			int ascii_val = str[i];

			hex[0] = (ascii_val / 16) < 10 ?
				(ascii_val / 16) + '0' : (ascii_val / 16) - 10 + 'A';
			hex[1] = (ascii_val % 16) < 10 ?
				(ascii_val % 16) + '0' : (ascii_val % 16) - 10 + 'A';
			hex[2] = '\0';
			len += _putchar('\\', buffer);
			len += _putchar('x', buffer);
			len += _putchar(hex[0], buffer);
			len += _putchar(hex[1], buffer);
		}
		else
		{
			len += _putchar(str[i], buffer);
		}
		i++;
	}
	return (len);
}
