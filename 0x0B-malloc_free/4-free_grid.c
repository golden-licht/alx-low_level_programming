#include <stdlib.h>

/**
  * free_grid - Deallocate memory for a 2D grid of integers
  * @grid: Pointer to the grid to be deallocated
  * @height: Height of the grid
  */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	if (height <= 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
