#include "main.h"

/**
 * print_square - Prints a square.
 * @size: The size of the square.
 *
 */
void print_square(int size)
{
	int x, y;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
