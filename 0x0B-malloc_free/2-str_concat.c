#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - prototype function that concatenates two strings.
 *
 * @s1: input first string.
 * @s2: input second string.
 *
 * Return: pointer to string or null if failure.
 *
 *
*/
char *str_concat(char *s1, char *s2)
{
	char *arr;
	int size1 = 0, size2 = 0;
	int i = 0, arrSize = 0;

	for (; s1[size1] != '\0'; size1++)
		;
	for (; s2[size2] != '\0'; size2++)
		;
	if (size1 == 0)
		s1 = '\0';
	if (size2 == 0)
		s2 = '\0';
	arrSize = size1 + size2;
	arr = malloc(arrSize *  sizeof(char) + 1);
	if (arr == 0)
		return (0);
	for (; i <= arrSize; i++)
	{
		if (i < size1)
			arr[i] = s1[i];
		else
			arr[i] = s2[i - size1];
	}
	arr[i] = '\0';
	return (arr);
}
