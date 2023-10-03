#include "main.h"

/**
  * print_number - Print an integer to stdout
  * @n: The integer to be printed
  */

void print_number(int n)
{

	int div, temp;

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

	div = 1;
	temp = n;

	while (temp > 0)
	{
		temp /= 10;
		div *= 10;
	}

	div /= 10;

	while (div > 0)
	{
		_putchar((n / div) + '0');
		n %= div;
		div /= 10;
	}
}
