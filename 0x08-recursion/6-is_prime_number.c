#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - prototype function that returns 1 if the
 * input integer is a prime number, otherwise return 0.
 *
 * @n: input number.
 * @x: inbut number.
 *
 * Return: 1 if the number is prime and 0 if
 * the number is not.
 *
*/
int pr_checker(int n, int x);
int is_prime_number(int n)
{
	return (pr_checker(n, 2));
}
/**
 * pr_checker- prototype function that returns 1 if the
 * input integer is a prime number, otherwise return 0.
 *
 * @n: input number.
 * @x: inbut number.
 *
 * Return: 1 if the number is prime and 0 if
 * the number is not.
 *
*/
int pr_checker(int n, int x)
{
	if (x == n && n > 1)
		return (1);
	else if (x % n == 0 || n <= 1)
		return (0);
	else
		return (pr_checker(n, x + 1));
}
