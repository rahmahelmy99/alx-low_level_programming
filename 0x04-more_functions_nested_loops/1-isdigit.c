#include "main.h"

/**
 * _isdigit - prototype function that checks checks
 *		for a digit (0 through 9).
 * @c: is an input number.
 *
 * Return: 1 if c is digit or 0 if it's not digit.
 *
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
