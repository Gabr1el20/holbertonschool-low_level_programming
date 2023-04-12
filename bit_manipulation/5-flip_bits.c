#include "main.h"

/**
 * flip_bits - the number of bits you would need to flip
 * to get from one number to another.
 * @n: one number.
 * @m: another number.
 * Return: the number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			num++;
		n = n >> 1;
		m = m >> 1;
	}
	return (num);
}
