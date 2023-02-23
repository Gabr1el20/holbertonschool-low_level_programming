#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: length of the line.
 *
 */
void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
