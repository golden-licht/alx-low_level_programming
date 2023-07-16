#include <stdio.h>
#include <stdlib.h>

/**
 * main - Add numbers passed as argument
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

		/**
		 * If argv[i] isn't a number, atoi returns 0.
		 * what if argv[i] is also the number 0?
		 */
		if (n == 0)
		{
			while (*argv[i] != '\0')
			{
				if (*argv[i] != '0')
				{
					printf("Error\n");
					return (1);
				}
				argv[i]++;
			}
		}
		sum = sum + n;
	}
	printf("%d\n", sum);
	return (0);
}
