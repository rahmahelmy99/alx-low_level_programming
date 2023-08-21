#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prototype function the draws a diagonal
 * line on the terminal.
 *
 * @n: input number of times the character \ should be printed.
 *
 * Return: nothing.
 *
*/

void print_diagonal(int n)
{
	int r, s;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (r = 1; r <= n; r++)
		{
			for (s = 1; s <= r; s++)
				_putchar(' ');
			_putchar('\\'); /*the character / in ascii*/
			_putchar('\n');
		}
	}
}

