#include "main.h"
#include <stdio.h>

/**
 * print_line - prototype function that draws a straight
 * line in the terminal.
 *
 *@n: input number of times the character _ should be printed
 *
 * Return: nothing
 *
*/

void print_line(int n)
{
	int i;

	for (i =  1; i <= n; i++)
	{
		_putchar('_');
		if (n <= 0)
			_putchar('\n');
	}
	_putchar('\n');
}
