#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strdup - copy string in a newly allocated space in memory
 * @str: the string to be copied
 *
 * Return: the pointer to the newly allocated space
 */

char *_strdup(char *str)
{
	int len;
	char *ptr;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	ptr = malloc(len + 1);
	if (ptr == NULL)
		return (NULL);
	strcpy(ptr, str);
	return (ptr);
}


