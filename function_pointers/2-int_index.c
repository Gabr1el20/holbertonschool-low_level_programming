#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer
 * @array: The array
 * @size: Size of the array
 * @cmp: The pointer to the function
 *
 * Return: if no element matches or size <= 0, -1.
 * otherwise, return the first element to match the element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
