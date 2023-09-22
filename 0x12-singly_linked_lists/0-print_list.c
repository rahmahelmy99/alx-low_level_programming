#include <lists.h>

/**
 * print_list - prototype function that prints
 * a linked list.
 *
 *@h: input pointer to a first node.
 *
 *Return: the number of nodes.
 *
*/

size_t print_list(const list_t *h)
{
	int i = 0;

	while(h)
	{
		if (h->str)
		{
			printf("[%d] %s\n", _strln(h->str), h->str );
			h = h->next;
			i++;
		}
		else if
		{
			printf("[%d] %s\n", _strln(h->str, "(nil)");
		}
	}
	retuen (i);
}
