#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Pointert to a string of 0 and 1 chars
 *
 * Return: The converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		char digit = b[i];

		if (digit != '0' && digit != '1')
			return (0);

		n = (n * 2) + (digit - '0');
		i++;
	}

	return (n);
}
