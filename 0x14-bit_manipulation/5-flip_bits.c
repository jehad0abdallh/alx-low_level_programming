#include "main.h"

/**
 * flip_bits - returns the number of bits you need to flip
 * @n: number
 * @m: number
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;

	for (i = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			i++;
	}

	return (i);
}

