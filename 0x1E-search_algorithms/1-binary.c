#include "search_algos.h"

/**
 * binary_search - Search for a value in a sorted array of integers
 * using Binary search algorithm
 * @array: The array in which @value is to be searched
 * @size: The size of @array
 * @value: The value to be searched for
 *
 * Return: The index where @value is located, or -1 if
 * @value is not found or @array is not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;

	if (!array)
		return (-1);

	while (left <= right)
	{
		size_t middle = left + (right - left) / 2;
		size_t current_size = right - left + 1;

		printf("Searching in array: ");
		print_array(&(array[left]), current_size);

		if (value == array[middle])
			return (middle);
		else if (value > array[middle])
			left = middle + 1;
		else
			right = middle - 1;

		middle = (left + right) / 2;
	}

	return (-1);
}

/**
 * print_array - Print array of integers
 * @array: The array to be printed
 * @size: The size of @array
 */

void print_array(int *array, size_t size)
{
	size_t i;

	if (!array)
		return;

	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i != size - 1)
			printf(", ");
		else
			printf("\n");
	}
}
