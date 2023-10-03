#define NUM_SEPARATORS 13

/**
  * _to_upper - Convert a lowercase character to uppercase
  * @c: The character to be converted
  *
  * Return: The uppercase character if 'c' is lowercase, otherwise
  * 'c' itself
  */

char _to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/**
  * _is_lower - Check if a character is a lowercase letter
  * @c: The character to be checked
  *
  * Return: 1 if 'c' is a lowercase letter, 0 otherwise
  */

int _is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

/**
  * is_separator - Check if a character is a separator from a
  * predefined set of separators
  * @c: The character to be checked
  *
  * Return: 1 if 'c' is a separator, 0 otherwise
  */

int is_separator(char c)
{
	int i;

	char separators[NUM_SEPARATORS] = {
		' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'
	};

	for (i = 0; i < NUM_SEPARATORS; i++)
	{
		if (c == separators[i])
			return (1);
	}
	return (0);
}

/**
  * cap_string - Capitalize the first letter of words in a string
  * @s: The input string to be modified
  *
  * Return: A pointer to the modified string
  */

char *cap_string(char *s)
{
	int  i;

	s[0] = _to_upper(s[0]);

	for (i = 1; s[i] != '\0'; i++)
	{
		if (is_separator(s[i - 1]) && _is_lower(s[i]))
			s[i] = _to_upper(s[i]);
	}

	return (s);
}
