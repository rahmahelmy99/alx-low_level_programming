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
	int n;

	while (str[n] != '\0')
		n++;
	n++;
	for (n /= 2 ; str[n] != '\0'; n++)
		_putchar(str[n]);
	_putchar('\n');
}
