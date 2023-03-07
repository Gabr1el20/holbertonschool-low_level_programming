#include "main.h"
/**
 * _strcat - Concatenates two strings
 * @dest: destinatary.
 * @src: source.
 *
 * Return: a pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	char *x = dest;
	char *y = src;
	char *temp = x;

	while (*x)
	{
		x++;
	}
	while (*y)
	{
		*x = *y;
		x++;
		y++;
	}
	*x = '\0';
	return (temp);
}
