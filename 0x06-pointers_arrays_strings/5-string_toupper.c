#include "main.h"

/**
 * *string_toupper - prototype function that changes all lowercase
 *letters of a string to uppercase.
 *
 *@str: input array of letters.
 *
 * Return: 0 if success.
 *
*/

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((int)str[i] >= 97 && (int)str[i] <= 122)
			str[i] = (int)str[i] - 32;
	}
	return (str);
}
