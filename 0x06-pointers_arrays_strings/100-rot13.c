/**
  * rot13 - Apply ROT13 cipher to a given string
  * @s: The input string
  *
  * Return: The encrypted/modified string
  */

char *rot13(char *s)
{
	int i, j;

	char letters[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = letters[(j + 26) % 52];
				break;
			}
		}
	}
	return (s);
}
