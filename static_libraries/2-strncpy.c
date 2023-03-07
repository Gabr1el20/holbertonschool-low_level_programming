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

	while (count < n && src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (temp);
}
