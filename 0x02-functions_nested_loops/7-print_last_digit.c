#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prototype function that prints
 * the last digit of a number.
 *
 * @n: input number to check last digit.
 *
 * Return: a result of the function
 *
*/

int print_last_digit(int n)
{
	int l_dgt;

	if (n < 0)
		l_dgt = -1 * (n % 10);
	else
		l_dgt = n % 10;
	_putchar(l_dgt + '0');
	return (l_dgt);
}
