#include "main.h"

/**
 * cap_string - a function that capitalizes every word of the string
 * @s: Placeholder
 * Return: Placeholder.
 */
char *cap_string(char *s)
{
	int count;

	for (count = 0; s[count] != 0; count++)
	{
		if (count == 0)
		{
			if (s[count] >= 97 && s[count] <= 122)
			{
				s[count] = s[count] - 32;
			}
		}
		else if (s[count - 1] == ' ' || s[count - 1] == '\t' || s[count - 1] == '\n'
				|| s[count - 1] == ',' || s[count - 1] == ';' || s[count - 1] == '.'
				|| s[count - 1] == '!' || s[count - 1] == '?' || s[count - 1] == '"'
				|| s[count - 1] == '(' || s[count - 1] == ')' || s[count - 1] == '{'
				|| s[count - 1] == '}')
		{
			if (s[count] >= 97 && s[count] <= 122)
			{
				s[count] = s[count] - 32;
			}
		}
	}
	return (s);
}
