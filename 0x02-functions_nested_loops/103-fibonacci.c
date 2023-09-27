#include <stdio.h>

/**
  * fibo_sum - return sum of even fibonaccis upto 4,000,000
  * Return: the sum
  */

int fibo_sum(void)
{
	int x, y, z, sum;

	x = 1;
	y = 2;
	z = x + y;
	sum = 0;

	while (x <= 4000000)
	{

		if (x % 2 == 0)
			sum += x;
		x = y;
		y = z;
		z = x + y;
	}
	return (sum);
}

/**
  * main - entry point of the program
  * Return: 0, upon success
  */

int main(void)
{
	printf("%d\n", fibo_sum());
	return (0);
}
