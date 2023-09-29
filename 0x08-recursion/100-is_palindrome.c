/**
 * _strlen_recursion - Computes the length of a string recursively.
 * @s: The string for which to calculate the length.
 *
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * palindrome_helper - Helper function for is_palindrome function.
 * @s: The string to check.
 * @i: The current index (used for recursion,
 *  should be 1 when initially called).
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int palindrome_helper(char *s, int i)
{
	if (*s == '\0')
		return (1);
	if (*s != *(s + _strlen_recursion(s) - i))
		return (0);
	return (palindrome_helper(s + 1, i + 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	return (palindrome_helper(s, 1));
}
