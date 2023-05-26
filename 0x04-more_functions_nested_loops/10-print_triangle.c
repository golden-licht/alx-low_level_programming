#include "main.h"

/**
 * print_triangle - Draws a triangle using #
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
	int x, y;

	y = size;
	if (size <= 0)
		_putchar('\n');
	while (size > 0)
	{
		x = size - 1;
		while (x > 0)
		{
			_putchar(' ');
			x--;
		}
		x = size - 1;
		while (x < y)
		{
			_putchar('#');
			x++;
		}
		_putchar('\n');
		size--;
	}
}
