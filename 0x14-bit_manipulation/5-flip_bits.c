#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip
 * to get from one number, @n to another, @m
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of flips required
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_nm = n ^ m;
	unsigned int flips = 0;

	while (xor_nm)
	{
		flips += xor_nm & 1;
		xor_nm >>= 1;
	}

	return (flips);
}

