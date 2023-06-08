#include "main.h"

/**
 * get_bit - return bit in specfic index.
 *
 * @n: number to search with.
 *
 * @index: bit address
 *
 * Return: bits
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (n >> index & 1);
}
