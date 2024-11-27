# Name
  \_printf - Formatted output conversion

# Synopsis
  #include "main.h"
  
  int \_printf(const char *format, ...);

# Description
  The function \_printf outputs to the stdout based on what is in the format string.

  The format string is a collection of characters and specifiers (%\_) that tell
  \_printf how to handle the variadic list of arguments.
  Each specifier in the format string is handled by a function get\_specifier
  which returns a function pointer capable of handling the type defined by
  the specifier.

  Each function returned by get\_specifier will take the va\_list as an argument
  and uses \_putchar to print to the stdout. They return their length to
  \_printf so the total length can be counted and returned at the end of the
  function.

# Conversion Specifiers
The conversion specifiers are characters printed after the % sign. They define the type of conversion to be applied.
The definition for the conversion specifiers are:

%c      Prints a single character using putchar.

%s      Characters from the array are printed up to but not inclusing the null terminator.

%%      Prints a % sign. No argument is convertered.

%d, %i  Retrieves an integer value and depending on the value of the integer, they are handled differently:
- If the integer is INT\_MIN, it prints a '-' and converts to an unsigned equivalent.
  
- If the integer is negative (but not INT_MIN), the '-' is negated and a positive integer is printed.
  
- If the integer is positive, the digits are printed directly.
  
# Return Value
On success, the functions return the number of bytes printed
(excluding the null terminator of a string).
Returns -1 if an error is encountered.

# Examples
### Printing a String:
```
  _printf("Hello, %s!\n", "world");
  
  Output : "Hello, world!"
```
### Printing a Character:

  _printf("Character: %c\n", 'A');
  
  Output: "Character: A"

### Printing Integers:

  _printf("Value: %i\n", 456);
  
  _printf("Value: %i\n", -321);

  Output: "Value: 456
           Value: -321"

### Printing a Percent Sign:

  _printf("Percent sign: %%\n");
  
  Output: "Percent sign: %"  

