#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _strlen_recursion - prototype function that returns
 * the length of string.
 * @s: pointer to an array of strings.
 *
 * Return: return the length of string.
 *
*/
int _strlen_recursion(char *s)
{
	int ln = 0;

	if (*s != '\0')
	{
		ln += _strlen_recursion(s + 1) + 1;
	}
	return (ln);
}
