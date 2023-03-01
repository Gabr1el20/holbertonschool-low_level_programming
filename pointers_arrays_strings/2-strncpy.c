#include "main.h"
/**
 * _strncpy - copy two strings.
 * @dest: Placeholder.
 * @src: Placeholder.
 * @n: Placeholder.
 *
 * Return: the pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;
	char *temp = dest;

	for (; count < n && src[count] != 0; count++)
	{
		dest[count] = src[count];
	}
	for (; count < n; count++)
	{
		dest = '\0';
	}
	return (temp);
}
