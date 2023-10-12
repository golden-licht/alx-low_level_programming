#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print the integers passed, as argument, to stdout
 * @separator: what should the separator string between the intgers be?
 * @n: number of integers
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator)
			printf("%s", separator);

		printf("%d", va_arg(list, int));
	}

	va_end(list);

	printf("\n");
}
