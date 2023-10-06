#include <stdlib.h>

/**
  * array_range - Create an array of integers from min to max inclusive
  * @min: The minimum integer member of the resulting array
  * @max: The maximum integer member of the resuslting array
  *
  * Return: Pointer to the created array
  */

int *array_range(int min, int max)
{
	int *p;
	int size, i;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	p = malloc(sizeof(int) * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = min + i;

	return (p);
}
