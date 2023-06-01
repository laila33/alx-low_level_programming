#include "lists.h"

/**
 * list_len - returns the number of elements i
 *
 * @h: pointer to the list_t list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}

