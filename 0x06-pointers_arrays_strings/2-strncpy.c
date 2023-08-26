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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( i; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
