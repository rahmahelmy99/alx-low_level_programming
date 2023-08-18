#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: program that prints alphabet in lowercase in reverse.
 *
 * Return: return value is 0 means success.
 *
*/

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
