#include "main.h"

/**
 * jack_bauer - prints from 00:00 up to 23:59
 */

void jack_bauer(void)
{
	int min1, hr1, min2, hr2;

	min1 = 0;
	hr1 = 0;
	min2 = 0;
	hr2 = 0;

	while (hr1 <= 2)
	{
		while (hr2 <= 9)
		{
			while (min1 <= 5)
			{
				while (min2 <= 9)
				{
					_putchar('0' + hr1);
					_putchar('0' + hr2);
					_putchar(':');
					_putchar('0' + min1);
					_putchar('0' + min2);
					_putchar('\n');
					min2++;
				}
				min2 = 0;
				min1++;
			}
			min1 = 0;
			if (hr2 >= 3 && hr1 == 2)
				break;
			hr2++;
		}
		hr2 = 0;
		hr1++;
	}
}
