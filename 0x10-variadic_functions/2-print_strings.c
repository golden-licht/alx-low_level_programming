#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		char *str = va_arg(args, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("nil");
		if (separator != NULL && i  < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}

