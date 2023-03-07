#include "main.h"

/**
 * _memcpy - coies memory area
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes
 *
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr1 = dest;
	char *ptr2 = src;
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		ptr1[count] = ptr2[count];
	}
	return (dest);
}
