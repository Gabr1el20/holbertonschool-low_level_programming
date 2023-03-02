#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: the return.
 *
 * Return: the 'str' value
 */
char *leet(char *str)
{
	int count, cuenta;
	char first[] = "aeotl";
	char sec[] = "43071";

	for (count = 0; str[count] != 0; count++)

	for (cuenta = 0; cuenta <= 5; cuenta++)
	{
		if (str[count] == first[cuenta] || str[count] == first[cuenta] - 32)
		{
			str[count] = sec[cuenta];
		}
	}
	return (str);
}
