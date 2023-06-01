/**
 * _strncat - concatenate string
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: number of src characters to be concatenated
 *
 * Return: pointer to the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, dest_length, src_length;

	/* Determine the length of the strings */
	dest_length = 0;
	for (i = 0; dest[i] != '\0'; i++)
		dest_length++;
	src_length = 0;
	for (i = 0; src[i] != '\0'; i++)
		src_length++;

	if (n < src_length)
		src_length = n;
	/* Concatenate the strings */
	for (i = 0; i < src_length; i++)
	{
		dest[dest_length] = src[i];
		dest_length++;
	}

	dest[dest_length] = '\0';
	return (dest);
}
