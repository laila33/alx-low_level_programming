#include "lists.h"

/**
 * free_listint2 - frees the list.
 *
 * @head: pointer to the listint_t list.
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *point;

	if (head == NULL)
		return;
	while (*head)
	{
		point = (*head)->next;
		free(*head);
		*head = point;
	}
	*head = NULL;
}
