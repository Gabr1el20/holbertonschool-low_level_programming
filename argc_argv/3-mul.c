#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Count of arguments.
 * @argv: Name of arguments.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{

	int count, mul = 1;

	if (argc - 1 < 2)
	{
		printf("Error\n");
		return (1);
	}
	for (count = 1; count < argc; count++)
	{
		mul = mul * atoi(argv[count]);
	}

	printf("%d\n", mul);
	return (0);
}
