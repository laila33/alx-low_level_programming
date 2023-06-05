#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node.
 *
 * @head: pointer to the first node.
 *
 * @idx:  the new node where added.
 *
 * @n: data to added in the new node.
 *
 * Return: address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *nn = malloc(sizeof(listint_t));
	listint_t *p = *head;


	if (nn == NULL || head == NULL)
		return (NULL);

	nn->n = n;
	nn->next = NULL;

	if (idx == 0)
	{
		nn->next = *head;
		*head = nn;
		return (nn);
	}

	for (j = 0; p && j < idx; j++)
	{
		if (j == idx - 1)
		{
			nn->next = p->next;
			p->next = nn;
			return (nn);
		}
		else
			p = p->next;
	}

	return (NULL);
}
