#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements
 *
 * @h:  list_t
 *
 * Return: The number of nodes in
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		s++;
		h = h->next;
	}

	return (s);
}

