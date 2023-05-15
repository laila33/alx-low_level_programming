#include "main.h"
/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: creat array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 **/
char *create_array(unsigned int size, char c)
{
	char *x = malloc(size);

	if (x == 0 || size == 0)
		return (0);
	while (size--)
		x[size] = c;
return (x);
}
