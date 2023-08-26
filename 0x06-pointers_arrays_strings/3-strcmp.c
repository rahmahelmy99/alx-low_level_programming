#include "main.h"
#include <stdio.h>

/**
 * _strcmp - prototype function that compares two strings.
 *
 *@s1: first input character.
 *@s2: second input character.
 *
 * Return: 0 if success.
 *
*/

int _strcmp(char *s1, char *s2)
{
	int res = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			res = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		*s1++;
		*s2++;
	}
	return (res);
}
