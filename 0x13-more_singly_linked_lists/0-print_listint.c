#include "lists.h"

/**
 * print_listint - prototype  function that prints all the elements
 * of a listint_t list.
 * @h: head of the linked list.
 * Return: number of nodes.
*/
size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
