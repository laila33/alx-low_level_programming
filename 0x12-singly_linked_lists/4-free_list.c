#include "lists.h"

/**
 * free_list - frees a list
 * @head: list_t list to be freed
 * Return: without return
 */

void free_list(list_t *head)
{
	list_t *x;

	while (head)
	{
		x =  head->next;
		free(head->str);
		free(head);
		head = x;
	}

}
