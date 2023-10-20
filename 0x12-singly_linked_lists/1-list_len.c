#include "lists.h"

/**
 * list_len - get the lingth of the linked list.
 * @h: the first node of the linked list.
 * Return: the length.
*/
size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}
	return (i);
}
