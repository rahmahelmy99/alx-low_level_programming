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
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
			_putchar('\n');
		else
		{
			for(j = 0; j <= i ;i)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
