#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Return: 0, if runs successfully
 */

int main(void)
{
	int n;
	int lstdgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lstdgt = n % 10;

	if (lstdgt > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, lstdgt);
	}
	else if (lstdgt == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, lstdgt);
	}
	else
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lstdgt);
	}

	return (0);
}
