#include "main.h"

/**
 * _puts - Print a string
 * @str: a pointer to first character of a string
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		_putchar(str[i]);
	_putchar('\n');
}
