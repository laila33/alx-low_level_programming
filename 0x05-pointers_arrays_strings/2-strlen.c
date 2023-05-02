#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s:  string parametr input.
 *
 * Return: The length of @s.
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; s++)
		++c;
	return (c);
}
