/**
 * _strcmp - compare two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: negative if s1 < s2, positive if s1 > s2, or 0 if s1 = s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		s1++;
		s2++;
		if (*s1 == '\0')
			break;
	}
	return (*s1 - *s2);
}
