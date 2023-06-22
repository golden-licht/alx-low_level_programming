/**
 * _strpbrk - locates the first occurrence in the
 * string s of any of the bytes in the string accept
 * @s: the string in which a character match is to be done
 * @accept: the character set against which match is to be checked
 *
 * Return: a pointer to the location of the first character match,
 * or NULL if no match is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
