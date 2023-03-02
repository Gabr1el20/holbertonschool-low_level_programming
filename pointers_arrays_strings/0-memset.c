#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to a memory area
 * @b: a constant byte.
 * @n: amount of bytes
 *
 * Return: a pointer to the memory area `s`.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		p[i] = b;
	}
	return (p);
}
