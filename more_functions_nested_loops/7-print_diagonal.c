#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal.
 * @n: length of the line.
 *
 */
void print_diagonal(int n)
{
	int spc, diag;


	if (n <= 0)
		_putchar('\n');
	else
	{
		for (diag = 0; n > 0; n--, diag++)
		{
			for (spc = 0; spc < diag; spc++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
