#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0, if successful
 */

int main(void)
{
	int n1, n2;

	n1 = 48; /* ASCII value of the number 0 */
	n2 = 48;

	while (n1 <= 57)
	{
		while (n2 <= 57)
		{

			if (n2 > n1)
			{
				putchar(n1);
				putchar(n2);

				if ((n2 != 57) || (n1 != 56))
				{
					putchar(',');
					putchar(' ');
				}
			}

			n2++;
		}

		n2 = 48;
		n1++;
	}

	putchar('\n');

	return (0);
}
