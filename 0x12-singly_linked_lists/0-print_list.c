#include "lists.h"

/**
 * print_list - prints  list

 * @h: pointer to the list_t  linked list to print
 *
 * Return:number of node
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		n++;
		h = h->next;

	}

	return (n);
}
