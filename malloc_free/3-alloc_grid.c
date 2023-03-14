#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * free_grid - A function that frees a memory allocation
 * @grid: a pointer to the memory.
 * @height: height
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

/**
 * alloc_grid - A function that returns a pointer to
 * a 2D array.
 * @width: Number of colummns of the array.
 * @height: Number of rows of the array.
 *
 * Return: if width/height <= 0, or failure, return NULL,
 * a pointer to the 2D array otherwise
 */
int **alloc_grid(int width, int height)
{
	int **ptr, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(height * sizeof(int *));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			free_grid(ptr, i);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
