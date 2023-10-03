#include "main.h"

/**
  * print_number - Print an integer to stdout
  * @n: The integer to be printed
  */

void print_number(int n)
{
	int rev, len;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	rev = 0;
	len = 0;

	while (n > 0)
	{
		rev = (10 * rev) + (n % 10);
		n /= 10;
		len++;
	}

	while (rev > 0)
	{
		_putchar((rev % 10) + '0');
		rev /= 10;
	}
}
