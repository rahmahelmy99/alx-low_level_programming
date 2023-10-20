#include "lists.h"
/**
 * _strlen - get the length of a string.
 * @s: a string.
 * Return: the size of a string.
*/
int _strlen(char *s)
{
	int i;

	if (!s)
		return (0);
	for (i = 0; s[i]; i++)
		;
	return (i);
}
/**
 * print_list -prototype function that prints all
 * elements of the list_t list.
 * @h: a struct data type.
 * Return:the number of nodes.
*/
size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		if (_strlen(h->str) == 0)
			printf("[%d] (nil)\n", _strlen(h->str));
		printf("[%d] %s\n", _strlen(h->str), h->str);
		h = h->next;
	}
	return (i);
}
