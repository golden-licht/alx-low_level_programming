#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Print the identifier for a dog
 * @d: a pointer to a dog struct
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("(nil)\n");
	if (d->owner == NULL)
		printf("(nil)\n");
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
