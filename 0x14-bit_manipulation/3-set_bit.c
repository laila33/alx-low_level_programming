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
	if (index > 63)
		return (-1);

	return (!!(*n | 1L << index));
}
