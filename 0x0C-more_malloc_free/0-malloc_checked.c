#include <stdlib.h>

/**
  * malloc_checked - Allocate a block of memory of size b
  * @b: The number of bytes to allocate in memory
  *
  * Return: A pointer to allocated memory, if successful
  */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = (malloc(b));

	if (p == NULL)
		exit(98);

	return (p);
}
