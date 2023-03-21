#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 * @argc: Count of arguments
 * @argv: Arguments
 *
 * Return: 0 (Always Success)
 */
int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		int first = 0;
		int second = 0;
		int (*test)(int, int);

		first = atoi(argv[1]);
		second = atoi(argv[3]);

		test = get_op_func(argv[2]);

		if ((*argv[2] == '/' || *argv[2] == '%') && second == 0)
		{
			printf("Error\n");
			exit(100);
		}
		printf("%d\n", test(first, second));
		return (0);
	}
	printf("Error\n");
	exit(98);
}
