#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int i, x;
	int *p;

	if (min > max)
		return (NULL);
	x = max - min + 1;
	p = malloc(sizeof(int) * x);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < x; i++, min++)
	{
		p[i] = min;
	}
	return (p);
}
