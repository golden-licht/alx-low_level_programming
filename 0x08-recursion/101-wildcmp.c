/**
 * wildcmp - Compares two strings with wildcard pattern matching.
 * @s1: The first string to compare.
 * @s2: The second string, which may contain '*' wildcard characters.
 *
 * Description: This function compares two strings and returns 1 if they match
 * considering '*' as a wildcard character that can match any sequence of
 * characters, or 0 if they do not match.
 *
 * Return: 1 if the strings match with wildcards, 0 otherwise.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
			return (1);
		if (*s1 == '\0')
			return (wildcmp(s1, s2 + 1));
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}

	if (*s1 != *s2)
		return (0);
	if ((*s1 == '\0' && *s2 != '\0') || (*s2 == '\0' && *s1 != '\0'))
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	return (wildcmp(s1 + 1, s2 + 1));
}
