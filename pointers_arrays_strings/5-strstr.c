#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: the first string
 * @needle: the substring.
 *
 * Return: a pointer to the beggining of the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != 0; haystack++)
	{
		char *a = needle;
		char *b = haystack;

		for (; *a != 0; a++)
		{
			if (*b == *a)
			{
				return (needle);
			}
		}
	}
	return ('\0');
}
