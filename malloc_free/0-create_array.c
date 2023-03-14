#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars
 * @size: size of the array
 * @c: initializator.
 *
 * Return: a pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int count;

	if (size == 0)
		return (NULL);

	char *ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
