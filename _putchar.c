#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * @buffer: Pointer to the buffer to store the character
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c, local_buffer *buffer)
{
	buffer->buffer[buffer->next_empty_index] = c;
	if (buffer->next_empty_index == 1023)
	{
		write(1, buffer->buffer, buffer->next_empty_index + 1);
		buffer->next_empty_index = 0;
		return (1);
	}
	buffer->next_empty_index++;
	return (1);
	/*return (write(1, &c, 1));*/
}
