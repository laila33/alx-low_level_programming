#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end .
 *
 * @head: pointer to the head.
 *
 *
 * @n: value inserted in new node.
 *
 * Return: pointer to the new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nn = malloc(sizeof(listint_t));
	listint_t *point = *head;

	if (nn == NULL)
		return (NULL);

	nn->n = n;
	nn->next = NULL;

	if (*head == NULL)
	{
		head = nn;
		return (nn);
	}

	while (point->next)
		point = point->next;

	point->next = nn;
	return (nn);
}
