#include <stdlib.h>

/**
 * int_index - Search for the index of an array where certain value, passed to
 * the function pointed by @cmp, matches the value at that index
 * @array: the array
 * @size: size of the array
 * @cmp: pointer to the function which compares the elements
 * of the array with certain value
 *
 * Return: the index of the array where the comparison matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;


	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
