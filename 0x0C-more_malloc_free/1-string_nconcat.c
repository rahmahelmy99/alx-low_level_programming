#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - prototype function that concatenates
 * two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: input number.
 * Return: a pointer.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char  *conc;
	unsigned int i, j, ln1, ln2;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	for (ln1 = 0; s1[ln1] != '\0'; ln1++)
		;
	for (ln2 = 0; s2[ln2] != '\0'; ln2++)
		;
	conc = malloc(ln1 + n + 1);
	if (conc == 0)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		conc[i] = s1[i];
	for (j = 0; j < n; j++)
	{	conc[i] = s2[j];
		i++;
	}
	conc[i] = '\0';
	return (conc);
}
