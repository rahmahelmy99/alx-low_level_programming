#include "main.h"
#include <stdio.h>

/**
 * _puts - prototype function that prints a string.
 *
 *@str: input that ponter takes.
 *
 * Return: 0 if success.
 *
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
