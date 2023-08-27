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
	int i;
	int j;
	char c[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int n[] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};

	for (i = 0; s[i]; i++)
	{
		for (j = 0; c[j]; j++)
		{
			if (s[i] == c[j])
			{
				s[i] == n[j] + 48;
			}
		}
	}
	return (s);
}
