#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index, for a number @n
 * @n: The number
 * @index: The index, starting from 0,, of the bit
 *
 * Return: 1, if it worked, or -1 if an error occured
 */

int clear_bit(unsigned long *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n & ~(1 << index);

	return (1);
}
