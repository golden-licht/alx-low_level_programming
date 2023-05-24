#include "main.h"

/**
 * print_alphabet_x10 - prints a-z 10 times
 */

void print_alphabet_x10(void)
{
	char x;
	int n;

	x = 'a';
	n = 0;

	while (n < 10)
	{
		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}

		_putchar('\n');
		n++;
		x = 'a';
	}
}

