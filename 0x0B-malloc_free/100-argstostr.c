#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - function to get the length of a string.
 * @s: pointer to a string.
 * Return: length of a string.
 *
*/

int _strlen(char *s)
{
	int ln;

	for (ln = 0; s[ln] != '\0'; ln++)
		;
	return (ln);
}

/**
 * argstostr - prototype function that concatinates all the
 * arguments of your program.
 * @ac: input int;
 * @av: duble pointer to the string.
 * Return: a pointer to a new string,or null if it fails.

*/

char *argstostr(int ac, char **av)
{
	char *str;
	str = mallloc (sizeof(*str) * c);
	if (ac == 0 || av == 0)
		return (0);

}
