#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the product
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the quotient
 */


int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - modulo of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the remainder
 */



int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
