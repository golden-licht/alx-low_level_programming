#include <stdlib.h>

/**
  * _calloc - Allocate a memory for an array of nmemb elements
  * of size bytes each, and initialize the memory with zeros.
  * @nmemb: The number of elements in the array
  * @size: The size in bytes of each element
  *
  * Return: A pointer to the allocated and initialized memory
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		((char *) p)[i] = 0;

	return (p);
}

