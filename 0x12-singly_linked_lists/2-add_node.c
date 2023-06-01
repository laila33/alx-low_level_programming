#include "lists.h"

/**
 * add_node - adds a new node at the beginning of list
 *
 * @head: pointer to singly linked list
 *
 * @str: pointer to signly linked list
 *
 * Return: The address of the new element or NULL if it failed
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nodee;
	size_t size = 0;

	nodee = malloc(sizeof(list_t));

	if (nodee == NULL)
		return (NULL);

	while (str[size])
		size++;

	nodee->len = size;

	nodee->str = strdup(str);

	nodee->next = *head;

	*head = nodee;

	return (nodee);
}
