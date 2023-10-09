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

	printf("Name: ");
	if (d->name == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", d->name);

	printf("Age: %f\n", d->age);

	printf("Owner: ");
	if (d->owner == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", d->owner);
}
