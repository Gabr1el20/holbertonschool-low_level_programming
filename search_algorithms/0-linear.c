#include "search_algos.h"
/**
 * linear_search - Searches for a value in an array of integers
 * using the linear search algorithm
 * @array: the array to be scanned
 * @size: size of the array
 * @value: value to search
 * Return: the value of the coincidence, -1 otherwise.
*/
int linear_search(int *array, size_t size, int value)
{
	size_t finder;

	for (finder = 0; finder < size; finder++)
	{
		printf("Value checked array[%ld] = [%d]\n", finder, array[finder]);
		if (array[finder] == value)
			return (finder);
	}
	return (-1);
}
