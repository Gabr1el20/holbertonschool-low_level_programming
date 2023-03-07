#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point.
 * @argc: Count of arguments
 * @argv: Name of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int x, y, sum = 0;

	if (argc == 0)
		printf("0\n");

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y]; y++)
		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}
