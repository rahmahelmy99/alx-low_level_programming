#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: program that prints all digit number in base 10.
 *
 * Return: return value is 0 means success.
 *
*/

int main(void)
{
	int dgt = 0;

	while (dgt <= 9)
	{
		printf("%i", dgt);
		dgt++;
	}
	printf("\n");
	return (0);
}
