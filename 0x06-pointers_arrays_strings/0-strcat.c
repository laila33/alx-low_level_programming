#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dect[i])
		i++;

	for (j = 0;  str[j]; j++)

		dest[i++] = str[j];

	return (dest);
}
