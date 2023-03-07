#include "main.h"

/**
 * _strchr - Locates a character in the string
 * @s: pointer to the string.
 * @c: the character.
 *
 * Return: a pointer to the first ocurrence of 'c' int the string 's', or NULL
 * if the character is not found.
 */
char *_strchr(char *s, char c)
{
	for (; *s != c && *s != '\0'; s++)
	{
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return ('\0');
	}
}
