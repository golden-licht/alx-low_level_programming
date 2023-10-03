/**
  * leet - Replace certain characters in a string
  * with their leet (1337) equivalent
  * @s: The input string
  *
  * Return: Pointer to the modified string
  */

char *leet(char *s)
{
	int i, j;

	char caps[5] = {'A', 'E', 'O', 'T', 'L'};
	char lowers[5] = {'a', 'e', 'o', 't', 'l'};
	char leets[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == caps[j] || s[i] == lowers[j])
			{
				s[i] = leets[j];
				break;
			}
		}
	}

	return (s);
}
