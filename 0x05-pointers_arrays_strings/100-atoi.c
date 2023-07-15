/**
 * _atoi - Convert a string to an integer
 * @s: the string
 *
 * Return: the converted integer, or 0, if there are no
 * numbers in the string
 */

int _atoi(char *s)
{
	int n, found, sign;

	n = 0;
	found = 0;
	sign = 1;
	while (*s != '\0')
	{
		if (*s == '-' && !found)
			sign = -1 * sign;
		else if (*s >= '0' && *s <= '9')
		{
			found = 1;
			if (sign == 1)
				n = 10 *n + (*s - 48);
			else
				n = 10 * n - (*s - 48);
		}
		else if (found && !(*s >= '0' && *s <= '9'))
			break;
		s++;
	}
	if (found)
		return (n);
	return (0);
}
