#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the grid on success else NULL
 */
int **alloc_grid(int width, int height)
{
	int row = 0, col;
	int **grid;

	if (width < 1 || height < 1)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	while (row < height)
	{
		grid[row] = malloc(width * sizeof(int));
		if (grid[row] == NULL)
		{
			free(grid);
			return (NULL);
		}
		row++;
	}

	for (row = 0; row < height; row++)
		for (col = 0; col < width; col++)
			grid[row][col] = 0;

	return (grid);
}

