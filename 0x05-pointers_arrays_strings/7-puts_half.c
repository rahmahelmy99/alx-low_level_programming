#include "main.h"
#include <stdio.h>

/**
 * puts_half - prototype function that prints half
 * of a string.
 *
 *@str: input character.
 *
 * Return: 0 if success.
 *
*/

void puts_half(char *str)
{
	int ln;

	while (str[ln] != '\0')
		ln++;
	for (ln /= 2 ; str[ln] != '\0'; ln++)
		_putchar(str[n]);
	_putchar('\n');
}
