#include "main.h"
#include <stdio.h>

/**
 * print_rev - prototype function that prints
 * a string, in reverse.
 *
 *@s: input that pointer take.
 *
 * Return: 0 if success.
 *
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	putchar('\n');
}
