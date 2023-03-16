#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - A function thar creates an array
 * of integers.
 * @min: the min value.
 * @max: the max value
 *
 * Return: The pointer to the newly
 * created array.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, count = (max - min) + 1;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(count * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < count; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
