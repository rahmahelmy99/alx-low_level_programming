#include "main.h"
#include <stdio.h>

/**
 * _memset - prototype function that fills memory
 *with a constant byte.
 *
 *@s: input array.
 *@b: input character.
 *@n: input number.
 *
 * Return: 0 if success.
 *
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
