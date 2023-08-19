#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prototype function that
 *prints the numbers, from 0 to 9.
 *
 * Return: 0 if program success.
 *
*/

void print_numbers(void)
{
	for (int i = 0; i <= 9 ; i++)
	{
		_putchar(i + 48);
	}
	_putchar('\n');
	return (0);
}
