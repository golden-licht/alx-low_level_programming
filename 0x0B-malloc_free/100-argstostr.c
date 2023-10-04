#include <stdlib.h>
#include <string.h>

/**
 * char_replace - Replace characters in a string
 * @s: The string to modify
 * @length: The length of the string
 * @old: The character to Replace
 * @new: The character to replace 'old' with
 */

void char_replace(char *s, int length, char old, char new)
{
	int i;

	for (i = 0; i < length; i++)
	{
		if (s[i] == old)
			s[i] = new;
	}
}

/**
 * argstostr - Concatenate command-line arguments into a single string
 * @ac: The number of command-line arguments
 * @av: An array of strings representing command-line arguments
 *
 * Return: A pointer to the concatenated string, or NULL in failure
 */

char *argstostr(int ac, char **av)
{
	char *s, *temp;
	int i, size;

	if (ac == 0 || av == NULL)
		return (NULL);

	size = 0;

	for (i = 0; i < ac; i++)
		size += strlen(av[i]) + 1;

	s = malloc(sizeof(char) * (size + 1));

	if (s == NULL)
		return (NULL);

	temp = s;

	for (i = 0; i < ac; i++)
	{
		strcpy(temp, av[i]);
		temp += strlen(av[i]) + 1;
	}

	char_replace(s, size, '\0', '\n');

	s[size] = '\0';

	return (s);
}
