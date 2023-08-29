#include "main.h"
#include <stdio.h>

/**
 * _strstr - prototype function that locates a substring.
 *
 *@haystack: input array.
 *@needle: input array.
 *
 * Return:  a pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
 *
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; haystack[i] == needle[j] && needle[j] != '\0'; j++)
			;
		if (needle[j] == '\0')
			return (haystack);
	}
	return (0);
}
