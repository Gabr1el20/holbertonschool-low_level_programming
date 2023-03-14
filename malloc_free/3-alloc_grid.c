#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
	int **ptr, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(height * sizeof(int *));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));
	}
	return (ptr);
}
