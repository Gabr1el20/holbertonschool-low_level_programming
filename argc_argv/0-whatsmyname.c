#include <stdio.h>

/**
 * main - Entry point
 * @argc: Count of arguments.
 * @argv: Name of arguments.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
