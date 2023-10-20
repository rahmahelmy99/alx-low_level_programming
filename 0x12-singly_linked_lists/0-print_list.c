#include "lists.h"
/**
 * _strlen - get the length of a string.
 * @s: a string.
 * Return: the size of a string.
*/
int _strlen(char *s)
{
	int ln;

	if (!s)
		return (0);
	for (ln = 0; s[ln]; ln++)
		;
	return (ln);
}
/**
 * print_list -prototype function that prints all
 * elements of the list_t list.
 * @h: a first node of linked list.
 * Return:the number of nodes.
*/
size_t print_list(const list_t *h)
{
	size_t i;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
