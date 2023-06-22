/**
 * _strspn - Get the length of a prefix substring that matches
 * a set of characters
 * @s: the string to search within
 * @accept: The set of characters to compare against
 *
 * Return: The length of the maximum initial segment of @s that
 * consists only of characters from @accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, found_match, match_count;

	match_count = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		found_match = 0;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				found_match = 1;
				break;
			}
		}
		if (!found_match)
			break;
		match_count++;
	}

	return (match_count);
}
