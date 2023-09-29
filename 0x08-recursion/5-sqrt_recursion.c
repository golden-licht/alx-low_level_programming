#include <stdio.h>

/**
  * sqrt_helper - helper function for _sqrt_recursion
  * @n: the number for which square root is to be found
  * @a: lower bound for the sqrt(n)
  * @b: upper bound for the sqrt(n)
  *
  * Description: the function only works for perfect squares,
  * if @n is not a perfect square it returns -1
  *
  * Return: the square root of @n
  */

int sqrt_helper(int n, long int a, long int b)
{
	long int x;

	if (a * a  == n)
		return (a);

	if (b * b == n)
		return (b);

	x = (a + b) / 2;

	if (a == x)
		return (-1);

	if (n >= a * a && n <= x * x)
		return (sqrt_helper(n, a, x));

	return (sqrt_helper(n, x, b));
}

/**
  * _sqrt_recursion - finds the square root of a perfect square
  * @n: the number for which square root is to be found
  *
  * Return: the square root of @n
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqrt_helper(n, 1, n));
}
