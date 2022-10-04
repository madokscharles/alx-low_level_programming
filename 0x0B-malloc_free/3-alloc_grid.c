#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integer
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer of an array of integers
 */

int **alloc_grid(int width, int height)
{
	int **grid, row, col;

	if (width < 1 || height < 1)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (row = 0; row < height; row++)
	{
		grid[row] = malloc(width * sizeof(int));
		if (grid[row] == NULL)
		{
			for (row--; row >= 0; row--)
				free(grid[row]);
			free(grid);
			return (NULL);
		}
	}

	for (row = 0; row < height; row++)
		for (col = 0; col < width; col++)
			grid[row][col] = 0;

	return (grid);
}
