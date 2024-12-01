#include "main.h"
#include "stdlib.h"

int main(int argc, char *argv[])
{
	int *a = malloc(sizeof(int));
	_printf("%p", NULL);
	_printf("%p", a);
	return EXIT_SUCCESS;
}
