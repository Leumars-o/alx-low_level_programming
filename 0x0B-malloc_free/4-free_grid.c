#include <stdlib.h>

/**
  * free_grid - frees up allocated memory
  *
  * Description: Function that frees 2d grid proviously allocated in
  * alloc_grid function.
  *
  * @grid: Double pointer integer to array 'grid'
  * @height: Integer parameter for Rows
  *
  * Return: Void
  */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
