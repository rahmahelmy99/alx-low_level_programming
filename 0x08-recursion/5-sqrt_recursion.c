#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - prototype function that returns the
 * natural square root of a number.
 *
 * @n: input number.
 * @x:input number.
 * Return: the result.
 *
*/
int sqroot(int n, int x);
int _sqrt_recursion(int n)
{
	return (sqroot(n, 1));
}
/**
 * sqroot - function to find the square root of a number using
 * 2 arrguments.
 *
 * @n: input square number.
 * @x: input number of first searching place.
 *
 * Return: the root of a number.
*/
int sqroot(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x < n)
		return (sqroot(n, x + 1));
	else
		return (-1);
}
