#include "main.h"

/**
* main - prints the number arguments passed
* @argc: number of command line arguments
* @argv: string array of command line arguments
*
* Return: 0, if successful
*/

int main(int argc, char *argv[])
{
	(void) argv;
	_putchar(argc - 1 + '0');
	_putchar('\n');
	return (0);
}
