#include "main.h"

/**
 * set_bit - return a bit at specfic index to 1.
 *
 * @n: number to converted.
 *
 * @index: address of the bit
 *
 * Return: 1 ( success) or -1 (failure)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);


}
