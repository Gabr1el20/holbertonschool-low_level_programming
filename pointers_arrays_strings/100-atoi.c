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

	for (; *s != '\0';s++)
	{
		if (*s >= '0' && *s <= '9')
		{
			num = (num * 10) + (*s - '0');
		}
		else if (num > 0)
		{
			break;
		}
		else if (*s == '-')
		{
			signo = signo * -1;
		}
	}
	return (num * signo);
}
