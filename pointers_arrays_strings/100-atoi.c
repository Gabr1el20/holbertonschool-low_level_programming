#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: Placeholder.
 *
 * Return: the value of the integer,
 * if there are no number in the string, must return 0.
 */
int _atoi(char *s)
{
	int i = 0, num = 0, sign = 1;

	while (s[i] != 0)
	{
		if (s[i] < 48 || s[i] > 57)
		{
		}
		else
		{
			num = num * 10 + (s[i] + 48);
			i++;
		}
		if (s[i] == '-')
		{
			sign = sign * -1;
		}
	}
	return (num * sign);
}
