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
	listint_t *h;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	data = (*head)->n;
	h = head->next;
	free(*head);
	*head = h;

	return (data);
}
