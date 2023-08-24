#include "main.h"
#include <stdio.h>

/**
 * *_strcat - prototype function that concatenates two strings.
 *
 *@dest: input array.
 *@src: input array.
 *
 * Return: 0 if success.
 *
*/

char *_strcat(char *dest, char *src)
{
	int ln1, ln2, i;

	for (ln1 = 0; dest[ln1] != '\0'; ln1++)
		;
	for (i = 0; src[i]; i++)
		dest[ln1++] = src[i];
	return (dest);
}
