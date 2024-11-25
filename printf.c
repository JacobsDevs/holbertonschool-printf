#include "main.h"
#include <stdarg.h>
/**
 * _printf - Custom implementation of printf function.
 * @format: String containing text and specifiers.
 *
 * Return: Number of characters printed, or -1 on error.
 */
int _printf(const char *format, ...)
{
        int i = 0;
        int len = 0;
        int (*func)(va_list);
        va_list ap;

        if (format == NULL)
                return (-1);
        va_start(ap, format);
        while (format[i] != '\0')
        {
                if (format[i] != '%')
                {
                        _putchar(format[i]);
                        len += 1;
                }
                else
                {
                        if (format[i + 1] == '\0')
                        {
                                _putchar('%');
                                len += 1;
                                break;
                        }
                        func = get_specifier(format[i + 1]);
                        if (func == NULL)
                        {
                                _putchar('%');
                                _putchar(format[i + 1]);
                                len += 2;
                        }
                        else
                        {
                                len += func(ap);
                        }
                        i++;
                }
                i++;
        }
        va_end(ap);
        return (len);
}
