#include "main.h"
/**
 * _abs - prints the absolute value of a number.
 * @x: the integer to be checked.
 *
 * Return: Always 0 (success).
 */

	int _abs(int x)
{
	if (x < 0)
	{
		int val_abs;

		val_abs = x * -1;
		return (val_abs);
	}
	return (0);
}

