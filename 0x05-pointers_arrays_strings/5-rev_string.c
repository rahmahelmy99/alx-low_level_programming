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
	int i = 0, ln;
	char temp;

	for (ln = 0; *s != '\0'; ++ln)
		;
	for (i = 0; i < ln / 2; ++i)
	{
		temp = s[i];
		s[i] = s[ln - 1 - i];
		s[ln - 1 - i] = temp;
	}
}
