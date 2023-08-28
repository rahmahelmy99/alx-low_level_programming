#include "main.h"
#include <stdio.h>

/**
 * _strspn - prototype function that gets the length
 * of a prefix substring.
 *
 *@s: input array.
 *@accept: input array to check.
 *
 * Return: number of bytes of the accept.
 *
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				continue;
			}
			else if (accept[j + 1] == '\0')
				break;
		}
	}
	return (n);
}
