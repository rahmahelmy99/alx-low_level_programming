#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - prototype function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of the
 * string given as a parameter.
 *
 * @str : input string.
 *
 * Return: returns a pointer to the duplicated string
 * or returns NULL if unavailable.
 *
*/

char *_strdup(char *str)
{
	int i;
	int size;

	if (str == 0)
		return (0);

	for (size = 0; str[size] != '\0'; size++)
		;
	char *arr = malloc(sizeof(str[size]) + 1);

	if (arr == 0)
		return (0);

	for (i = 0; i < size; i++)
	{
		arr[i] = str[i];
	}
	return (arr);

}
