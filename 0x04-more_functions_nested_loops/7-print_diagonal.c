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
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i ; j++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}

