#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct buffer - contains a buffer and the next empty index to use.
 *
 * @buffer: String buffer.
 * @next_empty_index: Keeps track of where the next empty slot is in buffer.
 */

struct buffer
{
	char *buffer;
	int next_empty_index;
};

typedef struct buffer local_buffer;

/**
 * struct specifiers - Structure to print correct specifier.
 *
 * @spec: The character that represents the specifier.
 * @func: A pointer to the function to run if 'spec' is a match.
 */

typedef struct specifiers
{
	char *spec;
	int (*func)(va_list ap, local_buffer *);
} specifier_t;

int _printf(const char *format, ...);
int (*get_specifier(char s))(va_list ap, local_buffer *);
int _putchar(char c, local_buffer *);
int print_char(va_list ap, local_buffer *);
int print_string(va_list ap, local_buffer *);
int print_percent(va_list ap, local_buffer *);
int print_unknown(va_list ap, local_buffer *);
int print_integer(va_list ap, local_buffer *);
int print_int_recursively(int n, local_buffer *);
int print_unsigned_recursively(unsigned int num, local_buffer *);
void clean_up_buffer(local_buffer *, int len);
local_buffer *setup_buffer(void);
int print_binary(va_list ap, local_buffer *);
int print_binary_recursively(unsigned int num, local_buffer *);
int print_custom_string(va_list ap, local_buffer *);
int print_pointer(va_list ap, local_buffer *buffer);
int print_ul_hexlower_rec(unsigned long num, local_buffer *buffer);
int print_hex_upper(va_list ap, local_buffer *);
int print_hexupper_rec(unsigned int num, local_buffer *buffer);
int print_hexlower_rec(unsigned int num, local_buffer *buffer);
int print_hex_lower(va_list ap, local_buffer *buffer);
int print_unsignd(va_list ap, local_buffer *);
int print_unsignd_recursively(unsigned int num, local_buffer *buffer);
int print_octal(va_list ap, local_buffer *);
int print_octal_recursively(unsigned int num, local_buffer *buffer);

#endif
