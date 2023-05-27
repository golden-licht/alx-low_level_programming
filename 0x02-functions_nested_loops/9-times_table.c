#include "main.h"

/**
 * times_table - Prints the 9 times table
 */

void times_table(void)
{
	int n1, n2, prdct, frst, scnd;

	n1 = 0;
	n2 = 0;

	while (n1 <= 9)
	{
		while (n2 <= 9)
		{
			prdct = n1 * n2;
			frst  = prdct / 10;
			scnd = prdct % 10;

			if (prdct > 9)
				_putchar(frst + '0');

			_putchar(scnd + '0');
			if (n2 < 9)
			{
				_putchar(',');
				if (n1 * (n2 + 1) > 9)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
				}
			}
			n2++;
		}
		_putchar('\n');
		n2 = 0;
		n1++;
	}
}
