#include "main.h"

/**
 * more_numbers - print 10 times the numbers 0-14
 */

void more_numbers(void)
{
	int n, ctr;

	n = 0;
	ctr = 0;
	while (ctr < 10)
	{
		while (n <= 14)
		{
			if (n > 9)
				_putchar('0' + n / 10);
			_putchar('0' + n % 10);
			n++;
		}
		_putchar('\n');
		n = 0;
		ctr++;
	}
}
