/**
 * _strlen - calculate the length of string
 * @s: the string for which the length is to be calculated
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int ctr;
	int i;

	ctr = 0;
	i = 0;
	while (s[i] != '\0')
	{
		ctr++;
		i++;
	}
	return (ctr);
}
