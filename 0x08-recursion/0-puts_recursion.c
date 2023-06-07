#include "main.h"

/**
 * _puts_recursion - Print a string passed as argument followed by a new line
 * @s: the string
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
