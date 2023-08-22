#include "main.h"
#include <stdio.h>

/**
 * rev_string - prototype function that reverses a string.
 *
 *@s: input that pointer take.
 *
 * Return: 0 if success.
 *
*/

void rev_string(char *s)
{
	int i = -1;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
