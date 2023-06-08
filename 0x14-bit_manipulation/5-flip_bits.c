#include "main.h"

/**
 * flip_bits - count number to change.
 *
 *
 * @n: 1st number.
 *
 *
 * @m: second number
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	int c = 0;

	while (x > 0)
	{
		c += (x & 1);
		x >>= 1;
	}
	return (c);
}
