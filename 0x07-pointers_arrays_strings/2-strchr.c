#include "main.h"
/**
 * _strchr - prints from the first occurrence of a char.
 * @s: source string
 * @c: tested char
 *
 * Return: new string.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
