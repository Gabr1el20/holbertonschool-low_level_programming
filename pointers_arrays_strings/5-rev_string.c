#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Idk
 */
void rev_string(char *s)
{
	char temp;
	int x, miti, len;

	for (len = 0; s[len] != 0; ++len)

	miti = (len / 2);

	for (x = 0; x < miti; ++x)
	{
		temp = s[x];
		s[x] = s[len - x - 1];
		s[len - x - 1] = temp;
	}
}
