/**
 * _strcpy - Copy a string
 * @src: the pointer to the string to be copied
 * @dest: to where it is copied to
 *
 * Return: a pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, n;

	n = 0;
	/*Determine lenght of src */
	for (i = 0; src[i] != 0; i++)
		n++;
	/* Copy to dest */
	for (i = 0; i <= n; i++)
		dest[i] = src[i];
	return (dest);
}
