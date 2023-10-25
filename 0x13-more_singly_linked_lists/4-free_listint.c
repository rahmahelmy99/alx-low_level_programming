#include "lists.h"
/**
 * free_listint - prototype function that freess a listint_t list.
 * @head: head node.
 * Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
