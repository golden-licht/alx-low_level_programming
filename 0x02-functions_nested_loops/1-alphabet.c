#include "main.h"

/**
 * print_alphabet - prints from a-z follwed by new line
 */

void print_alphabet(void)
{
	char x;

	x = 'a';

	while (x < 123)
	{
		_putchar(x);
		x++;
	}

	_putchar('\n');
}
