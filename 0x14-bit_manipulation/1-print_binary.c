#include <stdio.h>
#include <math.h>

#include "main.h"

/**
 * print_binary - Function print binary representation of  number.
 *
 * @n: printed number.
 *
 */
void print_binary(unsigned long int n)
{
	if (n == 1)
	{
		putchar('1');
		return;
	}
	else if (n == 0)
	{
		putchar ('0');
		return;
	}
	print_binary(n >> 1);
	putchar('0' + (n & 1));
}
