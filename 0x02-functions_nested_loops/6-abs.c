/**
 * _abs - Computes the absolute value of a number
 * @n: The number for which absolute value is to be done
 *
 * Return: the absolute value of the argument
 */

int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	return (n);
}
