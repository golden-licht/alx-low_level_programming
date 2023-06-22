/**
 * _strstr - finds the first occurence of the substring needle
 * in the string haystack
 * @haystack: the string from which substring is to be searched
 * @needle: the substring
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, found;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		for (j = 0; *(needle + j) != '\0' && *(haystack + i + j) != '\0'; j++)
		{
			if (*(haystack + i + j) != *(needle + j))
			{
				found = 0;
				break;
			}
			found = 1;
		}
		if (found)
			return (haystack + i);
	}
	return ('\0');
}
