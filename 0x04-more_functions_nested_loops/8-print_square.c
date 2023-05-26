#include "main.h"

/**
 * print_square - Draws a square using #
 * @size: the size of the square
 */

void print_square(int size)
{
	int x, y;

	x = size;
	y = size;
	if (size <= 0)
		_putchar('\n');
	while (size > 0)
	{
		while (x > 0)
		{
			_putchar('#');
			x--;
		}
		_putchar('\n');
		x = y;
		size--;
	}
}

