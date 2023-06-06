/**
 * _memset - Fill n bytes of memory, pointed by s
 * @s: pointer to the starting location to be filled
 * @b: constant char to fill the mermories with
 * @n: number of bytes of memory to be filled
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
