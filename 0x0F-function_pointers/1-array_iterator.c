#include <stdlib.h>
/**
 * array_iterator - Execute a function given as a parameter
 * on each element of an array
 * @array: the array
 * @size: size of the array
 * @action: pointer to the function to be called
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
