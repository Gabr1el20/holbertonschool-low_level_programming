#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: NULL on failure, or a pointer to the concatenated
 * string if success.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, count1 = 0, count2 = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[count1] != '\0')
		count1++;
	while (s2[count2] != '\0')
		count2++;

	concat = malloc(count1 + count2 + 1);

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < count1; i++)
	{
		concat[i] = s1[i];
	}
	for (i = 0; i < count2;i++)
	{
		concat[count1 + i] = s2[i];
	}
	concat[count1 + count2] = '\0';
	return (concat);
}
