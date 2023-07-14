#include "main.h"

/**
 * main - print the arguments passed to the program
 * @argc: number of arguments
 * @argv: array of strings
 *
 * Return: 0, if successful
 */


int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		while (*argv[i] != '\0')
		{
			_putchar(*argv[i]);
			argv[i]++;
		}
		_putchar('\n');
	}
	return (0);
}
