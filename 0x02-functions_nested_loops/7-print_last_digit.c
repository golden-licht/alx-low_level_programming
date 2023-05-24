#include "main.h"

/**
 * print_last_digit - Computes the last digit of the number passed as arument
 * @n: the number for which the last digit is to be found
 *
 * Return: the last digit of the argument
 */

int print_last_digit(int n)
{
	int x;

	x = n % 10;

	if (n < 0)
	{
		_putchar('0' + -1 * x);
		return (-1 * x);
	}
	_putchar(x + '0');

	return (x);
}
