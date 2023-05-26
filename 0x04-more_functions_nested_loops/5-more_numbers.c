#include "main.h"

/**
 * more_numbers - print 10 times the numbers 0-14
 */

void more_numbers(void)
{
	int n, ctr;

	n = 48;
	ctr = 0;
	while (ctr < 10)
	{
		while (n <= 62)
		{
			if (n <= 57)
			{
				_putchar(n);
				n++;
			}
			else
			{
				_putchar(49);
				_putchar(n-10);
				n++;
			}
		}
		_putchar('\n');
		n = 48;
		ctr++;
	}
}
