#include "main.h"

/**
 * print_last_digit - Print the last digit of a number.
 * @n: the number to be checked.
 *
 * Return: the value of last digit.
 */
	int print_last_digit(int n)
{
	int ulti;

	ulti = n % 10;
	if (ulti < 0)
	{
		ulti = ulti * -1;
	}

	_putchar(ulti + '0');
	return (ulti);
}
