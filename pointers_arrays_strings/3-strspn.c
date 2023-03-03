#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string.
 * @accept: substring
 *
 * Return: the number of bytes in the initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	/** declares the num variable */
	unsigned int num = 0;

	for (; *s != 0; s++)
	{
		char *ptr = accept;

		for (; *ptr != 0; ptr++)
		{
			if (*s == *ptr)
			{
				num++;
				break;
			}

		}
		if (*ptr == 0)
		{
			break;
		}
	}
	return (num);
}
