/**
 * print_name - function caller
 * @name: pointer to string/name
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
