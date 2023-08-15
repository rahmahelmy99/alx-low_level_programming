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
	char C = 'A';

	/*print lowercase alphabets*/
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	/*Print uppercase alphabets*/
	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}
