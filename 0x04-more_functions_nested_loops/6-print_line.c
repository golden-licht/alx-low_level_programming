#include "main.h"

/**
 * print_line - Draws a line of certain length specified by the argument
 * @n: number of _ characters used to draw the line
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
