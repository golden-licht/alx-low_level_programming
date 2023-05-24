#include "main.h"

/**
 * print_sign - Identifies the sign of a number passed as argument
 * @n: a number for which sign check is to be done
 *
 * Return: 1, if positive, 0, if 0 and -1, if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
