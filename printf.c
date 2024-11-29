#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * _printf - Custom implementation of printf function
 * @format: String containing text and specifiers.
 *
 * Return: Number of characters printed, or -1 on error.
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int len = 0;
	int (*func)(va_list, local_buffer *);
	va_list ap;
	local_buffer *l_buffer = setup_buffer();

	if (l_buffer == NULL || l_buffer->buffer == NULL || format == NULL)
		return (-1);
	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i], l_buffer);
			len += 1;
		}
		else
		{
			if (format[i + 1] == '\0')
				return (-1);
			func = get_specifier(format[i + 1]);
			if (func == NULL)
			{
				_putchar('%', l_buffer);
				_putchar(format[i + 1], l_buffer);
				len += 2;
			}
			else
			{
				len += func(ap, l_buffer);
			}
			i++;
		}
		i++;
	}
	clean_up_buffer(l_buffer, l_buffer->next_empty_index);
	va_end(ap);
	return (len);
}

/**
* setup_buffer - setup buffer an malloc the struct & buffer
*
* Return: Pointer to the buffer
*/

local_buffer *setup_buffer(void)
{
	local_buffer *l_buffer = (local_buffer *)malloc(sizeof(local_buffer));

	if (l_buffer != NULL)
		l_buffer->buffer = malloc(sizeof(char) * 1024);
	return (l_buffer);
}

/**
* clean_up_buffer - frees used space and writes buffer contents to stdout
* @l_buffer: pointer to the buffer
* @len: Length of the buffer
*/
void clean_up_buffer(local_buffer *l_buffer, int len)
{
	write(1, l_buffer->buffer, len);
	free(l_buffer->buffer);
	free(l_buffer);
}

