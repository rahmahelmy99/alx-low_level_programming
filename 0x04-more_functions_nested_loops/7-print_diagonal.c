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
	int slash, spaces;

	if (n <= 0)
		_putchar('\n');
	else
	{
		slash = 1;
		while (slash <= n)
		{
			for (spaces = 1; spaces <= slash; spaces++) /* to print spaces n times*/
				_putchar(' ');
			_putchar('\\'); /*the character / in ascii*/
			_putchar('\n');
			slash++;
		}
		_putchar('\n');
	}
}

