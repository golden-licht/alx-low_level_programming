#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * str_concat - Concatenate 2 strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to the memory location containing the 
 * concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;

	ptr = malloc(strlen(s1) + strlen(s2) + 1);
	if (ptr == NULL)
	{
		printf("Can't allocate %ld bytes", strlen(s1) + strlen(s2) + 1);
		return (NULL);
	}
	strncpy(ptr, s1, strlen(s1));
	strcpy(ptr + strlen(s1), s2);
	return (ptr);
}
