#include "lists.h"

/**
 * strln - prototype function get the length of string
 * @s: input string
 * Return: length of the string
*/

int strln(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}
