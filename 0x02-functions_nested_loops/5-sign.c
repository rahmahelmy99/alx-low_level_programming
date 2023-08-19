#include "main.h"

/**
 * print_sign - prototype function that prints
 *the sign of a number.
 *
 *@n: input number.
 *
 * Return: 1 if positive , -1 if negative and 0 if zero.
 *
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
}
