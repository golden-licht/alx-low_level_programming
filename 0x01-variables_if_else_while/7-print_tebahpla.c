#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0, if successful
 */

int main(void)
{
	char x;

	x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}

	putchar('\n');

	return (0);
}
