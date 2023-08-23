#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - prototype function that copies the string
 * pointed to by src,including null byte (\0).
 *
 *@dest: first input array.
 *@src: second inpuy array.
 *
 * Return: 0 if success.
 *
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
