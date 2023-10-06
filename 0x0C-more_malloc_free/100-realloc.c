#include <stdlib.h>
#include <string.h>

/**
  * _realloc - Reallcoate memory for the previously
  * allocated block pointed by ptr
  * @ptr: Pointer to the previously allocated memory block
  * @old_size: Size of the old memory block
  * @new_size: Size of the new memory block
  *
  * Return: Pointer to the newly allocated memory block, or NULL in failure
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int size_to_copy;
	void *temp;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);

		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	size_to_copy = (old_size < new_size) ? old_size : new_size;

	temp = malloc(new_size);

	if (temp == NULL)
		return (NULL);

	memcpy(temp, ptr, size_to_copy);
	free(ptr);
	ptr = temp;

	return (ptr);
}
