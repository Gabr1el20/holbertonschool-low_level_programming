#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - A function thar frees a 2D array
 * @grid: a pointer to the memory allocated.
 * @height: Dimension of the array.
 */
void free_grid(int **grid, int height)
{
	int count;

	for (count = 0; count < height; count++)
	{
		free(grid[count]);
	}
	free(grid);
}
