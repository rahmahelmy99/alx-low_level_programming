#include "lists.h"

/**
 * listint_len  - prototype function that prints the number of elements
 * in a listint_t list.
 * @h: head of the linked list.
 * Return: number of nodes.
*/
size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
