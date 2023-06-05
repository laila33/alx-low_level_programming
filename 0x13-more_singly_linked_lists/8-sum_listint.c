#include "lists.h"

/**
 * sum_listint - calculates the sum of all the value in a list
 * @head: the first node
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int cntr = 0;

	while (head)
	{
		cntr += head->n;
		head = head->next;
	}
	return (cntr);
}
