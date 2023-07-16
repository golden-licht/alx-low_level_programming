#include <stdlib.h>

/**
 * create_array - create an array of chars, and
 * initialize them with a specific char, @c
 * @size: size of the array to be created
 * @c: character to fill the array
 *
 * Return: pointer to the zeroth index of the array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	i = 0;
	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * size);
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
