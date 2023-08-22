#include "main.h"
#include <stdio.h>

/**
 * _strlen - prototype function that returns
 * the length of a string.
 *
 * @s: input that pointer will take to point.
 *
 * Return: 0 if success.
 *
*/

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		count++;
	return (count);
}
