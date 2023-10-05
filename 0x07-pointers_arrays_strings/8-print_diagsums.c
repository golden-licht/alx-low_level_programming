#include <stdio.h>

/**
  * print_diagsums - Print sum of right and left diagonals of a square matrix
  * @a: Pointer to the first element of the matrix
  * @size: Size of the matrix
  */

void print_diagsums(int *a, int size)
{
	int i, j, x, y;
	long sum_right, sum_left;

	sum_right = 0;
	sum_left = 0;

	x = size + 1;
	y = size - 1;

	for (i = 0, j = size - 1; i < (size * size); i += x, j += y)
	{
		sum_right += a[i];
		sum_left += a[j];
	}
	printf("%ld, %ld\n", sum_right, sum_left);
}
