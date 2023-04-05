#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: the string of 0 and 1 chars
 * Return: converted number, or '0' if 'b' is NULL,
 * or if there is one more char that is not '0' or '1'.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	for (; b[i]; i++)
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);
		value = 2 * value + (b[i] - '0');
	}
	return (value);
}
