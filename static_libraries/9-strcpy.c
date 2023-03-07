#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 * to the buffer pointed to by dest
 * @dest: the destinatary.
 * @src: Placeholder.
 *
 * Return: Placeholder.
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (src[count] != 0)
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (src);
}
