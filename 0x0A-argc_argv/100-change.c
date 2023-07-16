#include <stdlib.h>
#include <stdio.h>

/**
 * main - print the minimum number of coins to make a change
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0, if @argc = 2 or 1, if @argc != 2
 */

int main(int argc, char *argv[])
{
	int cents, count;

	count = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
		printf("0\n");
	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents = cents - 25;
		}
		else if (cents >= 10)
		{
			cents = cents - 10;
		}
		else if (cents >= 5)
		{
			cents = cents - 5;
		}
		else if (cents >= 2)
		{
			cents = cents - 2;
		}
		else
		{
			cents = cents - 1;
		}
		count++;
	}
	printf("%d\n", count);
	return (0);
}


