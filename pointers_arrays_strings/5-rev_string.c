#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Idk
 */
void rev_string(char *s)
{
	char temp;
	int x, mitad, count = 0;

	while (s[count] != 0)
	{
		count++;
	}

	mitad = count / 2;

	for (x = 0; x < mitad; ++x)
	{
		temp = s[x];
		s[x] = s[count - x - 1];
		s[count - x - 1] = temp;
	}
}
