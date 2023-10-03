#include <stdlib.h>

/**
  * alloc_grid - Allocate a 2d array of size widthxheight,
  * and initialize all elements to 0.
  * @width: Number of columns of the grid
  * @height: Number of rows of the grid
  *
  * Return: A pointer to the allocated grid if successful,
  * or NULL if allocation fails.
  */

int **alloc_grid(int width, int height)
{
	int **p, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(int *) * height);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);

		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(p[j]);
			free(p);

			return (NULL);
		}

		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}

	return (p);
}
