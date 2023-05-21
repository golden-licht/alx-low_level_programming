#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0, if successful
 */

int main(void)
{
	char x;
	int n;

	n = 0;
	x = 'a';

	while (n < 26)
	{
		putchar(x);
		x++;
		n++;
	}

	putchar('\n');
}
