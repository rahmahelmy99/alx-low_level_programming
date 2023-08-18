#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: program that prints all possible
 * combinations of single-digit numbers.
 *
 * Return: return value is 0 means success.
 *
*/

int main(void)
{
	int dgt = 0;

	while (dgt <= 9)
	{
		putchar(dgt + 48);
		if (dgt != 9)
		{
			putchar(',');
			putchar(' ');
		}
		dgt++;
	}
	putchar('\n');
	return (0);
}
