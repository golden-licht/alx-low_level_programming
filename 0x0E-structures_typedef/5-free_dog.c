#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free memory allocated for dog struct pointed by @d
 * @d: pointer for dog struct
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
