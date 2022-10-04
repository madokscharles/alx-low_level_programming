#include <stdio.h>
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
	int **grid, wt, ht;

	if (width < 1 || height < 1)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));

	if (!grid)
	{
		free(grid);
		return (NULL);
	}

	for (wt = 0; wt < height; wt++)
	{
		grid[wt] = (int *)malloc(width * sizeof(int));

		if (!grid[wt])
		{
			while (wt)
			{
				free(grid[wt]);
				wt--;
			}
			free(grid);
			return (NULL);
		}
		for (ht = 0; ht < width; ht++)
			grid[wt][ht] = 0;
	}

	return (grid);
}
