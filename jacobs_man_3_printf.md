# Name
  _printf - Formatted output conversion

# Synopsis
  #include "main.h"
  int _printf(const char *format, ...);

# Description
  The function \_printf outputs to the stdout based on what is in the format string.

  The format string is a collection of characters and specifiers (%_) that tell
  \_printf how to handle the variadic list of arguments.
  Each specifier in the format string is handled by a function get_specifier
  which returns a function pointer capable of handling the type defined by
  the specifier.

  Each function returned by get_specifier will take the va_list as an argument
  and uses _putchar to print to the stdout. They return their length to
  \_printf so the total length can be counted and returned at the end of the
  function.

# Conversion Specifiers
%c
%s
%%
%d %i

# Return Value

# Examples
