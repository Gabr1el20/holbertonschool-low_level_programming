#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: the string
 * @accept: the second string.
 *
 * Return: a pointer to the byte in s that mathches with accept, or NULL else.
 */
char *_strpbrk(char *s, char *accept)
{
	for (; *s != 0; s++)
	{
		char *a = accept;
		char *b = s;

		for (; *a != 0; a++)
		{
			if (*s == *a)
			{
				return (b);
			}
		}
	}
	return ('\0');
}
