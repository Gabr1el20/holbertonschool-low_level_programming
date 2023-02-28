#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: Placeholder
 */
void puts_half(char *str)
{
	int count = 0, i = 0;

	while (str[count] != 0)
	{
		count++;
	}
	if (count % 2 == 0)
	{
		i = count / 2;
	}
	else
	{
		i = ((count + 1) / 2);
	}

	for (; i < count; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
