#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int i, sum = 0, summ = 0;

	for (i = 0; i < size; i++)
	{
	sum += a[i];
	summ += a[size - i - 1];
	a += size;
	}
	printf("%d, %d\n", sum, summ);
}
