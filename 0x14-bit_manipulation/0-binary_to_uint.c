#include "main.h"

/**
 * binary_to_uint - convert  binary number to unsigned int.
 *
 * @b: string contain binary numbers.
 *
 *
 *
 * Return: int number
 */

unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int c = 0;

	if (!b)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		c = 2 * c + (b[j] - '0');
	}

	return (c);
}
