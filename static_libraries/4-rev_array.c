#include "main.h"

/**
 * reverse_array - reverses the content of an array of int´s.
 * @a: pointer to the first element of the array
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int temp;
	int count = 0;

	while (count < n / 2)
	{
		temp = a[count];
		a[count] = a[n - 1 - count];
		a[n - 1 - count] = temp;
		count++;
	}
}
