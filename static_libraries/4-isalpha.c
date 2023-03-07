#include <unistd.h>
#include "main.h"

/**
 * _isalpha - Check if there exist a lowercase
 * @c: the character to be checked
 *
 * Return: 1 for letter and 0 for anything else
 */
	int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	return (0);
}
