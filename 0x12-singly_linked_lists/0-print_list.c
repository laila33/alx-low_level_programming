
#include "lists.h"

#include "lists.h"

/**
 * strlenn- returns the length of a string
 * @x: string.
 * Return: length of @x.
 */
int strlenn(char *x)
{
	int j = 0;

	if (!x)
		return (0);
	while (*x++)
		j++;
	return (j);
}

/**
 * print_list - prints all the elements of a list_t
 *
 * @h: pointer to the list
 *
 *
 * Return: the number of nodes.
 *
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		printf("[%d] %s\n", strlenn(h->str), h->str ? h->str : "(nil");
		h = h->next;
		s++;
	}
	return (i);
}
