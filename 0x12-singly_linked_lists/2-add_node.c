#include "lists.h"

/**
 * strlenn- returns the length of a string
 * @x: string.
 * Return: length of @x.
 */
int strlenn(char *x)
{
	if (*x == 0)
		return (0);
	else
		return (1 + strlenn(x + 1));
}


/**
 * add_node - adds a new node at the beginning of a  list
 * @head: pointer to the first element of the list
 * @str: string to create in the new node
 * Return: address of  new element or NULL if it failed
 **/

list_t *add_node(list_t **head, const char *str)
{
	list_t *Nodee;

	Nodee = malloc(sizeof(list_t));
	if (Nodee == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	if (!Nodee->str)
	{
		return (NULL);
	}
	Nodee->len = strlenn(Nodee->str);
	Nodee->next = *head;
	*head = Nodee;

	return (Node);
}


