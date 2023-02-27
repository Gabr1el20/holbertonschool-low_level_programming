#include "main.h"

/**
 * swap_int - Swaps the values between two integers.
 * @a: the first value
 * @b: the second value.
 */
void swap_int(int *a, int *b)
{
	int c = *a;


	*a = *b;
	*b = c;
}
