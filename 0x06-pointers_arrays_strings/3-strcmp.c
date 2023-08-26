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
	int i;
	int res = 0;

	for (i = 0; s1[i]; i++)
	{
		if (s1[i] != s2[i])
		{
			res = ((int)s1[i] - 48) - ((int)s2[i] - 48);
			break;
		}
	}
	return (res);
}
