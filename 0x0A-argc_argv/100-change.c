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

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	count = 0;
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	count += cents / 25;
	cents = cents % 25;

	count += cents / 10;
	cents = cents % 10;

	count += cents / 2;
	cents = cents % 2;

	count += cents;

	printf("%d\n", count);

	return (0);
}
