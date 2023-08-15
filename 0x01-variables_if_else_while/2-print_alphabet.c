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
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
