#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
	unsigned int amount;
	unsigned int *p;

	amount = nmemb * size;

	p = malloc(amount);

	if (p == NULL)
	{
		_memset(p, 0, size);
		return (NULL);
	}
	return (p);
}
