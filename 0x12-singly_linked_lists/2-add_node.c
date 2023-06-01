#include "lists.h"

/**
 * add_node - adds a new node
 *
 * @head: double pointer to the list_t list
 *
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));

	unsigned int s = 0;

	while (str[s])
		s++;

	if (!newnode)
		return (NULL);

	newnode->str = strdup(str);
	newnode->s = s;
	newnode->next = (*head);
	(*head) = newnode;

	return (*head);
}
