/**
 * _strcat - concatenate string
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 *
 * Return: pointer to the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i, dest_length, src_length;

	/* Determine the length of the strings */
	dest_length = 0;
	for (i = 0; dest[i] != 0; i++)
		dest_length++;
	src_length = 0;
	for (i = 0; src[i] != 0; i++)
		src_length++;
	/* Concatenate the two strings replacing \0 with the character from src*/
	for (i = 0; i <= src_length; i++)
	{
		dest[dest_length] = src[i];
		dest_length++;
	}
	return (dest);
}
