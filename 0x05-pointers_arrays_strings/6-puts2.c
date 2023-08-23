#include "main.h"
#include <stdio.h>

/**
 * puts2 - prototype function that prints every other
 * character of a string, starting with the first character
 *
 *@str: input character.
 *
 * Return: 0 if success.
 *
*/

void puts2(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
	{
		if (count % 2 == 0)
			_putchar(str[count]);
	}
	_putchar('\n');
}
