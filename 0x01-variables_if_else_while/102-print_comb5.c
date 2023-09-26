#include <stdio.h>

/**
 * main - print all combinations of two two-digit numbers
 * Return: 0, on success
 */

int main(void)
{
	int x, y, i, j;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			for (i = x; i <= 9; i++)
			{
				for (j = 0; j <= 9; j++)
				{
					if ((10 * x) + y >= (10 * i) + j)
					{
						continue;
					}
					putchar(x + '0');
					putchar(y + '0');
					putchar(' ');
					putchar(i + '0');
					putchar(j + '0');
					if (((10 * x) + y) != 98 || ((10 * i) + j) != 99)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
