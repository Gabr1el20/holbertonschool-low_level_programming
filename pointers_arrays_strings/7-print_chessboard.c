#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: pointer to the value of rows.
 */
void print_chessboard(char (*a)[8])
{
	int row = 0, column = 0;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
		{
			_putchar(a[row][column]);
		}
		_putchar('\n');
	}
}
