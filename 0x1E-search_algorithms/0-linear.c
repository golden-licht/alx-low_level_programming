#include <stdio.h>

/**
 * linear_search - Search for a value in an array of integers
 * using Linear search algorithm
 * @array: The array in which @value is to be searched
 * @size: The size of @array
 * @value: The value to be searched
 *
 * Return: The index in @array in which @value is found, or
 * -1 if @array is null or @value is not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
