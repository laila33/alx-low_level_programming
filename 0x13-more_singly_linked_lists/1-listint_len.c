#include "lists.h"

/**
 * listint_len - return elements
 *
 *
 * @h: pointer to 1st node
 *
 *
 * Return: nnodes
 */
size_t listint_len(const listint_t *h)
{
	size_t cntr = 0;

	while (h)
	{
		h = h->next;
		cntr++;
	}
	return (cntr)
}
