#include "main.h"

/**
 * aux - Auxiliar function to calculate square roots.
 * @x: Placeholder.
 * @y: The calculator.
 *
 * Return: Placeholder.
 */
int aux(int x, int y)
{
	if (y * y > x)
		return (-1);

	if (y * y == x)
		return (y);

	return (aux(x, y + 1));
}
/**
 * _sqrt_recursion - Returns the nartural square root of a number.
 * @n: The natural number.
 *
 * Return: The square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (aux(n, 1));
}

