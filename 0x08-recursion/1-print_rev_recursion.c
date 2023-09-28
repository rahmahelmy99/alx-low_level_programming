#include "main.h"
#include <stdio.h>

/**
 *_print_rev_recursion - prototype function that prints a
 *string reversly.
 *
 * @s: pointer to an array of string.
 *
 * Return: nothing.
*/
void _print_rev_recursion(char *s)
{
	if (*s < '\0')
	{
		_putchar(*s);
		_print_rev_recursion(s - 1);
	}
}
