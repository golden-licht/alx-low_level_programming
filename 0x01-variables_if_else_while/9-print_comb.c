#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0, if successful
 */

int main(void)
{
	int n;

	n = 48; /* ASCII value for the number 0 */

	while (n <= 57)
	{
		putchar(n);

		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}

		n++;
	}

	putchar('\n');

	return (0);
}
