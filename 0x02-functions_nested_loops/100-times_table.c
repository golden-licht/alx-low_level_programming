#include "main.h"

/**
 * print_times_table - Prints the n times table
 *
 * @n: The number upto which the times table is done
 */

void print_times_table(int n)
{
	int x, y, prdct, tmp;

	if (n <= 15 && n >= 0)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				prdct = x * y;
				tmp = prdct / 10;
				if (prdct >= 100)
				{
					_putchar('0' + tmp / 10);
					_putchar('0' + tmp % 10);
				}
				else if (prdct >= 10)
				{
					_putchar('0' + tmp);
				}
				_putchar('0' + prdct % 10);
				if (y == n)
					break;
				_putchar(',');
				_putchar(' ');
				if (x * (y + 1) < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (x * (y + 1) < 100)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
