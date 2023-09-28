#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * factorial - prototype function that returns
 * a factorial of a givin number.
 *
 * @n: input number of the factorial.
 *
 * Return: return the result of the factorial.
 *
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
