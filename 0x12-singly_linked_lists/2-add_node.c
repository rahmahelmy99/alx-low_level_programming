#include "lists.h"
/**
 * add_node : to add a new node to a linked list.
 * @head: a double pointer to the first node of the linked list.
 * @str: an added string.
 *
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));

	if (!head || !node)
		return(0);
	if (str)
	{
		node->str = strdup(str);
		if (!node->str)
		{
			free(node);
			return (0);
		}

	}
}
