#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: Placeholder
 */
void puts_half(char *str)
{
	int count, i = 0;

	for (count = 0; str[count] != 0; count++)

	i = (count / 2);

	while (str[i])
	{
		_putchar(str[i + 1]);
		i++;
		if (i == 0)
			continue;
	}
	_putchar('\n');
}
