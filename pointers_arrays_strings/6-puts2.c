#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str : Placeholder
 */
void puts2(char *str)
{
	int count;

	for (count = 0; str[count] != 0; count++)
	{
		if ((count % 2) == 0)
			_putchar(str[count]);
	}
	_putchar('\n');
}
