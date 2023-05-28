#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0
 */

int main(void)
{
	int n;
	long int x, y, z;

	x = 1;
	y = x;
	z = 1;
	for (n = 0; n < 50; n++)
	{
		printf("%ld", z);
		if (n != 49)
			printf(", ");
		z += y;
		y = x;
		x = z;
	}
	printf("\n");
	return (0);
}

