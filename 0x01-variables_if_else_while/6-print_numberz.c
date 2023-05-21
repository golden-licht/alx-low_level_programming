#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0, if successful
 */

int main(void)
{
	int n;

	n = 48;

	while (n < 58)
	{
		/* The ASCII equivalent of 0 is 48, 1 is 49 ... 9 is 58) */
		putchar(n);
		n++;
	}

	putchar('\n');

	return (0);
}
