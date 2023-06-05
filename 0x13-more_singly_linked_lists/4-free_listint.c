#include "lists.h"

/**
 * free_listint - frees the list.
 *
 * @head: listint_t list to be removed.
 *
 *
 */
void free_listint(listint_t *head)
{
	listint_t *rm;

	while (head)
	{
		rm = head->next;
		free(head);
		head = rm;
	}
}



