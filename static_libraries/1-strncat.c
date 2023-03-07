#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: destinary.
 * @src: source
 * @n: the amount of bytes.
 *
 * Return: The pointer to the dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *str1 = dest;
	char *str2 = src;
	char *temp = str1;

	if (n > 0)
	{
		while (*str1)
		{
			str1++;
		}

		while (*str2 && n > 0)
		{
			*str1 = *str2;
			str1++;
			str2++;
			n--;
		}
	}
	else
		dest = '\0';
	return (temp);
}
