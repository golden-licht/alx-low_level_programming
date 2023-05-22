#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0, if successful
 */

int main(void)
{
	int n;
	char x;

	n = 48; /* ASCII for 0 */
	x = 'a';

	while (n < 58)
	{
		putchar(n);
		n++;
	}

	while (x <= 'f')
	{
		putchar(x);
		x++;
	}

	putchar('\n');

	return (0);
}
