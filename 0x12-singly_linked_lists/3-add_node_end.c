#include "lists.h"

/**
 * add_node_end -  adds a new node at the end of list
 *
 * @head: pointer to list
 *
 * @str: string to put in  node
 *
 * Return: The address of the new element or NULL if it failed.
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lista, *end;
	size_t size = 0;

	lista = malloc(sizeof(list_t));
	if (lista == NULL)
		return (NULL);
	while (str[size])
		size++;

	lista->len = size;

	lista->str = strdup(str);

	if (*head == NULL)
	{
		lista->next = *head;
		*head = lista;
	}
	else
	{
		lista->next = NULL;
		end = *head;

		while (end->next)
			end = end->next;
		end->next = lista;
	}
	return (lista);
}
