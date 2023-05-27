#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0, if successful
 */

int main(void)
{
	int n;

	n = 1;

	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz ");
		else if (n % 3 == 0)
			printf("Fizz ");
		else if (n % 5 == 0)
		{
			printf("Buzz");
			if (n != 100)
				printf(" ");
		}
		else
			printf("%d ", n);
		n++;
	}
	printf("\n");
	return (0);
}
