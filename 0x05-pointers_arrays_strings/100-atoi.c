
int _atoi(char *s)
{
	int n, found, sign;

	n = 0;
	found = 0;
	sign = 1;
	while (*s != '\0')
	{
		if (*s == '-' && !found && (*(s + 1) >= '0' && *(s + 1) <= '9'))
			sign = -1;
		else if (*s >= '0' && *s <= '9')
		{
			found = 1;
			n = 10 * n + (*s - 48);
		}
		s++;
	}
	if (found)
		return (sign * n);
	return (0);
}
