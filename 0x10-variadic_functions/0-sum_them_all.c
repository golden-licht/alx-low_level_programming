#include <stdarg.h>

/**
 * sum_them_all - add the arguments passed to it
 * @n: number of arguments passed to be added
 *
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list args;

	va_start(args, n);
	if (n == 0)
		return (0);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);
	return (sum);
}
