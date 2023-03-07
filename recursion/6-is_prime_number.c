#include "main.h"

/**
 * aux - Function to calculate if y is a prime number
 * @x: Comparator
 * @y: Checker for Prime number.
 *
 * Return: A recursion to calculate the value of y
 */
int aux(int x, int y)
{
	if (x < 2)
	{
		return (0);
	}
	else if (y * y > x)
	{
		return (1);
	}
	else if (x % y == 0)
	{
		return (0);
	}
	else
		return (aux(x, y + 1));
}

/**
 * is_prime_number - A function to return the Prime number
 * @n: The number itself
 *
 * Return: The auxiliar function, starting with y = 2.
 */
int is_prime_number(int n)
{
	return (aux(n, 2));
}
