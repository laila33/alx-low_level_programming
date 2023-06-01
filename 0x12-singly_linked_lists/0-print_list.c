
#include "lists.h"

#include "lists.h"

/**
 * strlenn- returns the length of a string
 * @x: string.
 * Return: length of @x.
 */
int strlenn(char *x)
{
	int j = 0;

	if (!x)
		return (0);
	while (*x++)
		j++;
	return (j);
}

/**
 * print_list - prints all the elements of a list_t
 *
 * @h: pointer to the list
 *
 *
 * Return: the number of nodes.
 *
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}
