# _Printf Project 🖨️
***
This is a custom printf function replicating some of those of print (3).
It was completed as part of a group project related to programming in C
for Holberton School Australia.

## Current features
***
Format specifiers implemented
- Characters (%c)
- Strings (%s)
- Decimal integers (%d, %i)
- Binary integers (%b)
- Unsigned decimal integers (%u)
- Octal integers (%o)
- Hexadecimal integers (%x, %X)
- Prints non-hidden characters as hexadecimal values (%S)
- Print pointer address (%p)

## Requirements
***
- Allowed editors: vi, vim, emacs
- All code is written in Betty style.
- No more than 5 functions per file.

Authorized functions and macros:
- ```write(man 2 write)```
- ```malloc (man 3 malloc)```
- ```free (man 3 free)```
- ```va_start (man 3 va_start)```
- ```va_end (man 3 va_end)```
- ```va_copy (man 3 va_copy)```
- ```va_arg (man 3 va_arg)```

## Compilation
***
- All files were compiled on Ubuntu 20.04 lTS gcc version 11.40.
- All the .c files together with a main.c file are compiled this way:

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
```

##How to use
***
In the main.c file, the printf can be used like this:

```#include "main.h"

int main(void)
{
	int n = 10;
	char *string = "Hello World";

	_printf("%s, this project is %d out of %d!", string, n);
	return (0);
}
```
Output:
```
Hello World, this project is 10 out of 10!
```

## Contributors
***
- Mahsa
- Max
- Jacob






