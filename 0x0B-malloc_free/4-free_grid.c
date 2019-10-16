#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - frees a 2 diminesional grid created by the function alloc_grid
 * @grid: a double pointer that has the address of a 2D grid in the form of an
 * integer
 * @height: height of the grid in the form of an integer
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
		free(grid[i]);
	}

	free(grid);
}
