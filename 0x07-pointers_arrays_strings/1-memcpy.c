#include "main.h"
#include <stdio.h>

/**
 * _memcpy - prototype function that copies memory area.
 *
 *@dest: first input array
 *@src: second input array.
 *@n: input number.
 *
 * Return: dest array.
 *
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++, n--)
	{
		dest[i] = src[i];
	}
	return (dest);
}
