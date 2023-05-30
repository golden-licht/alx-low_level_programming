#include "main.h"

/**
 * print_rev - prints string, in reverse
 * @s: pointer to the first character of a string
 */


void print_rev(char *s)
{
	int i, ctr, j;

	ctr = 0;
	/* determine the length of the string */
	for (i = 0; s[i] != 0; i++)
		ctr++;
	/* print in reverse */
	for (j = ctr; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}

