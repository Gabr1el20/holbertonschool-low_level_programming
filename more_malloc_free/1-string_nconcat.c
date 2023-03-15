#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - A function that concatenates two strings
 * @s1: The first string.
 * @s2: The second string.
 * @n: Number of bytes to be concatenated.
 *
 * Return: a pointer to a newly allocated
 * space in memory, with s1, followed by
 * the first n bytes of s2.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int count1 = 0;
	unsigned int count2 = 0;
	unsigned int i;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[count1] != '\0')
		count1++;
	while (s2[count2] != '\0' && count2 < n)
		count2++;

	ptr = malloc(count1 + count2 + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < count1; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0; i < count2; i++)
	{
		ptr[count1 + i] = s2[i];
	}
	ptr[count1 + count2] = '\0';
	return (ptr);
}
