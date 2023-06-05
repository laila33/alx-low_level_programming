#include "lists.h"

/**
 * pop_listint - deletes the head node.
 *
 *
 * @head: pointer to  first node.
 *
 * Return: the data in the node.
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *o;
	int S;

	if (head == NULL || *head == NULL)
		return (0);

	S = (*head)->n;
	o = (*head)->next;
	free(*head);
	*head = o;

	return (S);
}
