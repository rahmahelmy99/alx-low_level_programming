#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prototype function that prints
 *the alphabet in lowercase.
 *
 * return: return 0 if success.
 *
*/

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
