#include "main.h"

/**
 * print_rev - Prints a string, in reverse. followed by a New line.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int x, y = 0;

	for (x = 0; s[x] != 0; x++)
		y++;

	for (x = y - 1; x >= 0; --x)
		_putchar(s[x]);
	_putchar('\n');
}
