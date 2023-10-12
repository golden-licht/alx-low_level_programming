#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print strings passed as argument
 * @separator: the string separator
 * @n: the number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);

		if (!str)
			str = "(nil)";

		if (i > 0 && separator)
			printf("%s", separator);

		printf("%s", str);
	}

	printf("\n");

	va_end(list);
}
