#include "main.h"
#include <stdio.h>

/**
 * leet - prototype function that encodes
 *a string into 1337.
 *
 *@s: input array.
 *
 * Return: 0 if success.
 *
*/

char *leet(char *s)
{
	int i, j;
	char c[] = {'A', 'E', 'O', 'T', 'L'};
	int n[] = {4, 3, 0, 7, 1};

	for (i = 0; s[i]; i++)
	{
		for (j = 0; c[j]; j++)
		{
			if (s[i] == c[j] || s[i] == c[j] + 32)
			{
				s[i] == 48 + n[j];
			}
		}
	}
	return (s);
}
