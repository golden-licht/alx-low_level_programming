#include <stdio.h>

/**
  * main - print all possible different combinations of 3 digits
  * Return: 0 on success
  */

int main(void)
{
	for (int i = 0; i <= 7; i++)
	{
		for (int j = i + 1; j <= 8; j++)
		{
			for (int k = j + 1; k <= 9; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (((100 * i) + (10 * j) + k) != 789)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
