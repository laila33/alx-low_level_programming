#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *x;

	if (str == 0)
		return (NULL);
	for (; str[size] != '\0', size++)
	;
	x = malloc(size * sizeof(*str) + 1);
	if (x == 0)
		return (NULL);

	for (; i < size; i++)
		x[i] = str[i];

	return (x);
}
