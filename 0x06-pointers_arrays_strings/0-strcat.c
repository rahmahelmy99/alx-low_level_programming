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
	int ln1, i;

	for (ln1 = 0; dest[ln1]; ln1++)
		;
	for (i = 0; src[i]; i++)
	{
		ln1++;
		dest[ln1] = src[i];
	}
	ln1++;
	return (dest);
}
