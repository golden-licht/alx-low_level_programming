/**
 * _isdigit - Checker for digits
 * @c: the character for which digit checking is to be done
 *
 * Return: 1, if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
