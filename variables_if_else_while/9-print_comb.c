#include <stdio.h>

/**
 *	main - Entry point
 *
 *	Return: Always 0 (success)
 *
 */

	int main(void)
{
	int x;

	while (x < 10)
{
	putchar((x % 10) + '0');
	if (x < 9)
{
		putchar(',');
		putchar(' ');
}
	x++;
}

	putchar('\n');
	return (0);
}
