#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int x, y;
	char *a;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(argv[1]);
	a = argv[2];
	y = atoi(argv[3]);

	if (get_op_func(a) == NULL || a[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*a == '/' && y == 0) ||
	    (*a == '%' && y == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(a)(x, y));

	return (0);
}
