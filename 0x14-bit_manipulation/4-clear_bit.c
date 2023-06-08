#include "main.h"

/**
 * clear_bit - make  value of a specfic bit to 0.
 *
 * @n: pointer to converted number.
 *
 * @index: addrss of the bit.
 *
 * Return: 1 or -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	*n = (~(1UL << index) | *n);

	return (1);
}
