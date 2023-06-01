/**
 * string_toupper - Change lowercase to uppercase
 * @s: pointer to the string, to which case manipulation is done
 *
 * Return: pointer to the string
 */

char *string_toupper(char *s)
{
	char *s2;

	s2 = s;
	for (; *s != '\0'; s++)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
	}
	return (s2);
}

