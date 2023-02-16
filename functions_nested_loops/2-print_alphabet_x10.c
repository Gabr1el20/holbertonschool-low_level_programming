#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet ten times
 *
 *  Return: void
 */
	void print_alphabet_x10(void)

{
	char x;
	int q = 0;

	while (q <= 9)
	{

	for (x = 'a'; x <= 'z'; x++)
{
	_putchar(x);
}
	_putchar('\n');
	q++;
}
}
