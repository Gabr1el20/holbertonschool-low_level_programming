#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: Placeholder
 */
void puts_half(char *str)
{
	int count, i = 0;

	for (count = 0; str[count] != 0; count++)

	i = (count - 1) / 2 + 1;

	while (str[i] != 0)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
