#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point.
 * @argc: Count of arguments.
 * @argv: pointer to a string, shows the value of arguments.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int cents[5] = {25, 10, 5, 2, 1};
	int mons = 0;
	int cant = 0;
	int count;

	if (argc - 1 < 0)
	{
		printf("0\n");
	}
	else if (argc - 1 != 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cant = atoi(argv[1]);
		for (count = 0; count < 5; count++)
		{
			while (cant >= cents[count])
			{
				cant = cant - cents[count];
				mons++;
			}
		}
	}
	printf("%d\n", mons);
	return (0);
}
