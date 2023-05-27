#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0, if successful
 */

int main(void)
{
	int x, prm, j;

	/* we only need to check upto the square root of the number */
	for (j = 2; j < 782850; j++)
	{
		x = 612852475143 % j;
		if (x == 0)
			prm = j;
	}
	printf("%d\n", prm);
	return (0);
}

