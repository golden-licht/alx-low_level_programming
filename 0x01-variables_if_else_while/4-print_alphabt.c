#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0, if successful
 */

int main(void)
{
	char x;

	x = 'a';

	while (x <= 'z')
	{
		if (x == 'e' || x == 'q')
		{
			x++;
			continue;
		}

		putchar(x);
		x++;
	}

	putchar('\n');

	return (0);
}
