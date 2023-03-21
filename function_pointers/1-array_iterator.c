#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter on
 * each element of an array
 * @array: The array
 * @size: Size of the array
 * @action: The pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
