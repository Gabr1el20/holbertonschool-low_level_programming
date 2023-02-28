#include "main.h"
#include <stdio.h>

/**
 * print_array - A function that prints n elements of an array of integers.
 * @a: the array.
 * @n: number of elements of the array to be printed.
 */
void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		printf("%d", a[count]);

		if (count < n - 1)
			printf(", ");
	}
	printf("\n");

}
