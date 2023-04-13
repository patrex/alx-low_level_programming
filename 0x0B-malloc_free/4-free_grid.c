#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a previously alloc'd block of mem
 * @height: how may rows to free
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int tmp = 0;

	for (; tmp < height; tmp++)
		free(grid[tmp]);

	free(grid);
}

