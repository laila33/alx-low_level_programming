
#include "lists.h"

/**
 * print_list - prints the elements of a linked list
 *
 * @h: pointer to the list_t linked  list
 *
 *
 * Return: the size of linked list
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else 
			printf("[0] (nil)\n");
		n++;
		h = h->next;
			        
	}
	return (n);
}
