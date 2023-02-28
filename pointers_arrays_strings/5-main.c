#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[1] = "";
	char x[11] = "Holberton!";

	printf("%s\n", s);
	printf("%s\n", x);
	rev_string(s);
	rev_string(x);
	printf("%s\n", s);
	printf("%s\n", x);
	return (0);
}
