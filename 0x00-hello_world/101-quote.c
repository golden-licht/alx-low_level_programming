#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: 0, if successful
 */

int main(void)
{
	char *txt = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(2, txt, sizeof(txt) - 1);

	return (1);
}

