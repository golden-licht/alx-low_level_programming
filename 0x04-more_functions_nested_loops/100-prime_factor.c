#include <math.h>
#include <stdbool.h>
#include <stdio.h>

/**
 * is_prime - check if a number is prime
 * @n: the number for which primality is to be checked
 *
 * Return: true, if @n is prime, false otherwise
 */

bool is_prime(long int n)
{
	int x, i;

	if (n <= 1)
	{
		return (false);
	}

	if (n == 2)
	{
		return (true);
	}

	if (n % 2 == 0)
	{
		return (false);
	}

	x = sqrt(n);

	for (i = 3; i <= x; i += 2)
	{
		if (n % i == 0)
		{
			return (false);
		}
	}

	return (true);
}

/**
  * largest_prime_factor - find the largest prime factor of a number
  * @n: the number
  *
  * Return: the largest prime factor of @n
  */

long int largest_prime_factor(long int n)
{
	int x, i;
	long int largest, j;

	x = sqrt(n);
	largest = -1;

	for (i = 1; i <= x; i++)
	{
		if (n % i == 0)
		{
			j = n / i;

			if (is_prime(j) && j > largest)
			{
				largest = j;
			}

			if (is_prime(i) && i > largest)
			{
				largest = i;
			}
		}
	}

	return (largest);
}

/**
  * main - entry point of the program
  *
  * Return: 0 on success
  */

int main(void)
{
	printf("%ld\n", largest_prime_factor(612852475143));
	return (0);
}
