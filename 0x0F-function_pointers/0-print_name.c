#include <stdlib.h>

/**
 * print_name - function caller
 * @name: pointer to string/name
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
