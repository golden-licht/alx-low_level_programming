#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of command line arguments
 * @argv: string array of command line arguments
 *
 * Return: 0, if successful
 */

int main(int argc, char *argv[])
{
	char *program_name;

	(void) argc;
	program_name = argv[0];
	while (*program_name != '\0')
	{
		_putchar(*program_name);
		program_name++;
	}
	_putchar('\n');
	return (0);
}
