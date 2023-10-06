#include <stdlib.h>
#include <string.h>

/**
  * string_nconcat - Concatenates string s1, with n bytes of s2
  * @s1: the first string
  * @s2: the second string
  * @n: the number of bytes of s2 to concatenate
  *
  * Return: Pointer to the concatenated string
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= strlen(s2))
		n = strlen(s2);

	p = malloc(sizeof(char) * (strlen(s1) + n + 1));

	if (p == NULL)
		return (NULL);

	strncpy(p, s1, strlen(s1));
	strcpy(p + strlen(s1), s2);

	return (p);
}
