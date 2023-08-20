#include "main.h"
#include <stdio.h>

/**
 * _abs - prototype function that computes the absolute
 * value of an integer.
 *@n:input number to check absolute.
 *
 * Return: n if program success.
 *
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
