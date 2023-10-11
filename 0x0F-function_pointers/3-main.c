#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - Do an operation on two integers passed as argument, based on the
  * operator passed and print the result
  * @argc: The number of arguments passed
  * @argv: Array of arguments as a string
  *
  * Return: 0, upon success
  */

int main(int argc, char **argv)
{
	int num1, num2, answer;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = get_op_func(argv[2]);

	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	answer = op(num1, num2);

	printf("%d\n", answer);

	return (0);
}
