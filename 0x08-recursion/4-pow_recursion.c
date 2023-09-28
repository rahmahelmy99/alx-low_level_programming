#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - prototype function that return the
 * value of x raised to the power of y.
 *
 * @x: input number.
 * @y: the exponentiation number.
 *
 * Return: the result.
 *
*/
int _pow_recursion(int x, int y)
{
	if (y != 1)
	{
		return(x * power(x, y - 1));
	}
}
