#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memset - prototype function that fills memory
 *with a constant byte.
 *@s: input array.
 *@b: input character.
 *@n: input number.
 * Return: 0 if success.
*/
char *_memset(char *s, char b, unsigned int n)
{
	/*char *p = s;*/

	while (n--)
		*s++ = b;
	return (s);
}

/**
 * _calloc - prototype function that allocates memory
 * for an array, using malloc.
 * @nmemb: input number of elemnets.
 * @size: input the size of an element.
 * Return: a pointer.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mloc;

	if (nmemb == 0 || size == 0)
		return (0);
	mloc = malloc(size * nmemb);
	if (mloc == 0)
		return (0);
	_memset(mloc, 0, size * nmemb);
	return (mloc);
}
