#include "main.h"
#include <stdio.h>

/**
 * rev_string - prototype function that reverses a string.
 *
 *@s: input that pointer take.
 *
 * Return: 0 if success.
 *
*/

void rev_string(char *s)
{
	int i;
	int ln = 0;
	char temp = s[0];

	while (s[ln] != '\0')
	       ++ln;
	for (i = 0; i < ln; ++i)
	{
		ln--;
		temp = s[i];
		s[i] = s[ln];
		s[ln] = temp;
	}
}
