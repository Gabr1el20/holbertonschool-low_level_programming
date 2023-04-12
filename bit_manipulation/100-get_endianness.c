#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int checker = 1;
	char *address = (char *) &checker;

	return ((int) *address);
}
