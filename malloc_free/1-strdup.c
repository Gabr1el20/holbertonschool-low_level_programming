#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - A function thar returns a pointer to
 * a newly allocated space in memory.
 * @str: the string to be duplicated.
 *
 * Return: NULL if str = NULL, a pointer to the duplicated string if success.
 */
char *_strdup(char *str)
{
	unsigned int i, count = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);

	while (str[count] != '\0')
		count++;

	ptr = malloc((count + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
