#include "main.h"
#include <stdio.h>

/**
 *_puts_recursion - prototype function that prints a string.
 *
 * @s: pointer to array of characters.
 *
 * Return: nothing.
 *
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return ('\n');
	_putchar(*s);
	_puts_recursion(s+1);
}
