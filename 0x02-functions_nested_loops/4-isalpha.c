#include "main.h"
#include <stdio.h>

/**
 * _isalpha - checks the input is letter or not.
 *
 * @c: input charater.
 *
 * Return: 1 if c is a letter and 0 otherwise.
 *
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
