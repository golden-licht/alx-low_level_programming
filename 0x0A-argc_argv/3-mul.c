#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers, passed as argument
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0, if successful, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int prdct;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		prdct = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", prdct);
		return (0);
	}
}
