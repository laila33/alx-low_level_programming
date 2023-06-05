#include "lists.h"

/**
 * get_nodeint_at_index - returns  nodes.
 *
 * @head: pointer to the first node.
 *
 * @index: node index
 *
 * Return: pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	for (j = 0; j < index; j++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
