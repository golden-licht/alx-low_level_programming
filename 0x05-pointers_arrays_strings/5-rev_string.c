/**
 * rev_string - Reverse a string
 * @s: pointer to character set
 */

void rev_string(char *s)
{
	int i, ctr;

	ctr = 0;

	/* Determine the length of the string */
	for (i = 0; s[i] != '\0'; i++)
		ctr++;

	for (i = 0; i < ctr - 1; i++)
	{
		char temp = s[i];

		s[i] = s[ctr - 1];
		s[ctr - 1] = temp;

		ctr--;
	}

}
