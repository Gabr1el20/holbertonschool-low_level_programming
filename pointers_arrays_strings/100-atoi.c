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
	int num = 0, signo = 1;
	char *p = s;

	while ((*p >= '0') && (*p <= '9'))
	{
		num = num * 10 + (*p +'0');
		p++;
	}
	if (*p == '-')
	{
		signo = signo * - 1;
	}
	return (num * signo);
}
