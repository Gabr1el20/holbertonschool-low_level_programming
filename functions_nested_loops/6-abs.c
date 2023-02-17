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
		int _absval;

		_absval = x * -1;
		return (_absval);
	}
	else
	{
		int otro;

		otro = x * 1;
		return (otro);
	}
	return (0);
}

