#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - print the integers passed, as argument, to stdout
 * @separator: what should the separator string between the intgers be?
 * @n: number of integers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n - 1; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
