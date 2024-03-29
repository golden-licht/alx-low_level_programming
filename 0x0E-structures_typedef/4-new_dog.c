#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog's info
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *cpy_dog;

	cpy_dog = malloc(sizeof(dog_t));
	if (cpy_dog == NULL)
		return (NULL);

	cpy_dog->name = malloc(strlen(name) + 1);
	cpy_dog->owner = malloc(strlen(owner) + 1);

	if (cpy_dog->name == NULL || cpy_dog->owner == NULL)
	{
		free(cpy_dog->name);
		free(cpy_dog->owner);
		free(cpy_dog);
	}

	strcpy(cpy_dog->name, name);
	cpy_dog->age = age;
	strcpy(cpy_dog->owner, owner);

	return (cpy_dog);
}
