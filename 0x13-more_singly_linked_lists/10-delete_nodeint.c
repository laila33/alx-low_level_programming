#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in  list
 * @head: pointer to the first node
 * @index: index to deleted
 *
 * Return: 1  ,-1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *now = *head;

	listint_t *p = NULL;

	unsigned int j = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(now);
		return (1);
	}

	while (j < index - 1)
	{
		if (now == NULL || now->next == NULL)
			return (-1);
		now = now->next;
		j++;
	}


	p = now->next;
	now->next = p->next;
	free(p);

	return (1);
}
