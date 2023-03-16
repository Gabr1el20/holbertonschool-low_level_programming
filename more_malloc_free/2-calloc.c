#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _memset - A function that fills memory with
 *  a constant byte.
 *  @s: pointer to the area
 *  @b: The constant byte.
 *  @n: amount of bytes.
 *
 *  Return: A pointer to the memory area s.
 */
unsigned int *_memset(unsigned int *s, char b, unsigned int n)
{
	unsigned int *ptr = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		ptr[i] = b;
	}
	return (ptr);
}

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of members.
 * @size: size of the array.
 *
 * Return: A pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * sizeof(size));

	if (p == NULL)
	{
		return (NULL);
	}
	else
		_memset(p, 0, size);
	return (p);
}
