/**
 * _isalpha - Checker for alphabetic characters
 * @c: the character for which the alphabetic check is to be done
 *
 * Return: 1, if the argument passed is an alphabet, 0 otherwise.
 */

int _isalpha(int c)
{
	if (((c > 64) && (c < 91)) || ((c > 96) && (c < 123)))
		return (1);
	return (0);
}
