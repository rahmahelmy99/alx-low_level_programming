#include "lists.h"

/**
 * add_nodeint_end  - prototype function that adds a new node at the end.
 * of a listint_t list.
 * @head:double pointer to head of the linked list.
 * @n: data.
 * Return: the address of the new element, or NULL if it failed.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw_node = malloc(sizeof(listint_t));
	listint_t *node;

	if (!head || !nw_node)
		return (0);
	nw_node->next = 0;
	nw_node->n = n;
	if (*head)
		nw_node->next = *head;
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = nw_node;
	}
	return (nw_node);
}
