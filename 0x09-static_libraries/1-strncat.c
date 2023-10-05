#include "main.h"
#include <stdio.h>

/**
 * *_strncat - prototype function that concatenates
 * two strings.
 *
 *@dest: first input array.
 *@src: second input array.
 *@n: input number.
 *
 * Return: 0 if success.
 *
*/

char *_strncat(char *dest, char *src, int n)
{
	int ln, i;

	for (ln = 0; dest[ln]; ln++)
		;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[ln++] = src[i];
	return (dest);
}
