#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Add positive numbers passed as argument
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0, if arguments passed are numbers, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i, sum, n;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		n = atoi(argv[i]);

		while (*argv[i] != '\0')
		{
			if (!isdigit(*argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			argv[i]++;
		}

		sum = sum + n;
	}
	printf("%d\n", sum);
	return (0);
}
