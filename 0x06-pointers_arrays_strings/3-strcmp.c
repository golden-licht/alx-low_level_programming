/**
 * _strcmp - compare two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: -1 if s1 < s2, 1 if s1 > s2, or 0 if s1 = s2
 */

int _strcmp(char *s1, char *s2)
{
	int len_s1, len_s2, len, i;

	/* Determine the length of s1 and s2 */
	len_s1 = 0;
	for (i = 0; s1[i] != '\0'; i++)
		len_s1++;
	len_s2 = 0;
	for (i = 0; s2[i] != '\0'; i++)
		len_s2++;

	if (len_s1 > len_s2)
		return (1);
	if (len_s1 < len_s2)
		return (-1);

	len = len_s1;
	for (i = 0; i < len; i++)
	{
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] < s2[i])
			return (-1);
	}
	return (0);
}
