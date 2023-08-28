#include "main.h"
#include <stdio.h>

/**
 * _strchr - prototype function that locates a character in a string.
 *
 *@s: input array.
 *@c: input character.
 *
 * Return: a pointer to the first occurrence of the character c in
 *the string s, or NULL if the character is not found.
 *
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (s + i); /*to return the adrs of the
					 * character not the (s) first adrs
					*/
		else
			return ('\0');
	}
}
