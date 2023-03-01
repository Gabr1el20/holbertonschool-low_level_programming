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
	int num = 0, signo = 1, stop = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			signo = signo * - 1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			num = num * 10 + (*s + '0');
			stop = 1;
		}
		else if (stop)
		{
			break;
		}
		s++;
	}
	return (num *signo);
}
