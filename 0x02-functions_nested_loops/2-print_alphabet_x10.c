#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - a function that prints 10
 *times the alphabet in lowercase.
 *
 * return: 0 if the program success.
 *
*/

void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
