#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: program that prints alphabet in lowercase.
 *
 * Return: return value is 0 means success.
 *
*/

int main(void)
{
	int dgt = 0;

	while (dgt <= 9)
	{
		putchar(dgt + '0');
		dgt++;
	}
	putchar('\n');
	return (0);
}
