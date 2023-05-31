#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: pointer to character type
 */

void puts_half(char *str)
{
	int i, n, h;

	n = 0;
	/* Determine the length of the string */
	for (i = 0; str[i] != 0; i++)
		n++;
	/* Odd or even for the length of the string */
	if (n % 2 == 0)
		h = n / 2;
	else
		h = (n - 1) / 2;
	/* Print the second half of the string */
	while (h > 0)
	{
		_putchar(str[n - h]);
		h--;
	}
	_putchar('\n');
}
