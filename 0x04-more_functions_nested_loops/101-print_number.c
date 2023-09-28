#include "main.h"

/**
  * print_number - prints number to the screen
  * @n: the number to be printed
  */

void print_number(int n)
{
	int len, temp;

	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
	}

	temp = n;
	len = 1;

	while (temp > 9)
	{
		temp /= 10;
		len *= 10;
	}

	while (len > 0)
	{
		temp = n / len;
		n = n - (len * temp);

		_putchar('0' + temp);

		len /= 10;
	}
}
