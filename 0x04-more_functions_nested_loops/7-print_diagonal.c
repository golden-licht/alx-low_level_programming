#include "main.h"

/**
 * print_diagonal - Draw diagnoal using \
 *
 * @n: number of \ to build the diagonal
 */

void print_diagonal(int n)
{
	int m, k;

	k = n;
	if (n <= 0)
		_putchar('\n');
	while (n > 0)
	{
		m = n;
		while (m < k)
		{
			_putchar(' ');
			m++;
		}
		_putchar('\\');
		_putchar('\n');
		n--;
	}
}
