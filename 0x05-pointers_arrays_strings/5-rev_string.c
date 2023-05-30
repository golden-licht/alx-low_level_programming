/**
 * rev_string - Reverse a string
 * @s: pointer to character set
 */

void rev_string(char *s)
{
	int i, ctr, j;
	char str[2000];

	ctr = 0;
	/* Determine the length of the string */
	for (i = 0; s[i] != 0; i++)
		ctr++;
	ctr--;
	/* Copy the string */
	for (i = 0; s[i] != 0; i++)
		str[i] = s[i];
	i = 0;
	/* Reverse the string */
	for (j = ctr; j >= 0; j--)
	{
		s[i] = str[j];
		i++;
	}
}
