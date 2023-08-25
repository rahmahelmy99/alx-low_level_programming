#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - prototype function that copies a string.
 *
 *@dest: first input array.
 *@src: second input array.
 *@n: input number.
 *
 * Return: 0 if success.
 *
*/

char *_strncpy(char *dest, char *src, int n)
{
	int ln, i;

	for (ln = 0; src[ln]; ln++)
		;
	for (i = 0; i <= ln; i++)
		dest[i] = src[i];
	return (dest);
}
