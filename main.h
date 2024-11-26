#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct specifiers - Structure to print correct specifier.
 *
 * @spec: The character that represents the specifier.
 * @func: A pointer to the function to run if 'spec' is a match.
 */

typedef struct specifiers
{
	char *spec;
	int (*func)(va_list ap);
} specifier_t;


int _printf(const char *format, ...);
int (*get_specifier(char s))(va_list ap);
int _putchar(char c);
int print_char(va_list ap);
int print_string(va_list ap);
int print_percent(va_list ap);
int print_unknown(va_list ap);
int print_integer(va_list ap);
int print_int_recursively(int n);
int print_unsigned_recursively(unsigned int num);

#endif
