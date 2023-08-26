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
	int i, res = 0;

	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			res = ((int)s1[i] - 48) - ((int)s2[i] - 48);
			break;
		}
		i++;
	}
	return (res);
}
