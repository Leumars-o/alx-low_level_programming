#include <stdlib.h>

/**
  * alloc_grid - creates a 2D array of integers
  *
  * Description: Function that returns a pointer to a 2D array of ints
  *
  * @width: Integer parameter for columns
  * @height: Integer parameter for Rows
  *
  * Return: Pointer to 2D array, NULL on failure
  */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;
	int failed = 0;

	array = (int **)malloc(height * sizeof(int *));
	if (width <= 0 || height <= 0)
		return (NULL);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			failed = 1;
			break;
		}
	}
	/* if allocation fails */
	if (failed)
	{
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				free(array[j]);
			}
			free(array);
			return (NULL);
		}
	}
	/*initialize 2d array to 0 */
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
