/**
 * _isupper - Checker for uppercase alphabets
 * @c: the character for which the check is to be done
 *
 * Return: 1, if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
