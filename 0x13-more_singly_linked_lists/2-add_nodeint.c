#include "lists.h"

/**
 * add_nodeint  - prototype function that adds a new node at the beginning
 * of a listint_t list.
 * @head:double pointer to head of the linked list.
 * @n: data.
 * Return: the address of the new element, or NULL if it failed.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw_node = malloc(sizeof(listint_t));

	if (!head || !nw_node)
		return (0);
	nw_node->next = 0;
	nw_node->n = n;
	if (*head)
		nw_node->next = *head;
	*head = nw_node;
	return (nw_node);
}

