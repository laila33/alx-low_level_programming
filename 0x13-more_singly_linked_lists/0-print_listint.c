#include "lists.h"

/**
 * print_listint - print the elements of a list
 *
 *
 * @h: pointer to 1st node in list.
 *
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
