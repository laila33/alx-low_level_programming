#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	int j, k = 0;
	va_list x;

	va_start(x, n);

	for (i = 0; i < n; i++)
	{
		k += va_arg(x, int);
	}
	va_end(x);

	return (0);
}
