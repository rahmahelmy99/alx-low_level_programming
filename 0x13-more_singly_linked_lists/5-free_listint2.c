#include "lists.h"
/**
 * free_listint2 - prototype function that freess a listint_t list.
 * @head: head node.
 * Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *node, *t;

	if (!head)
		return;
	node = *head;
	while (node)
	{
		t = node;
		node = node->next;
		free(t);
	}
	*head = 0;
}
