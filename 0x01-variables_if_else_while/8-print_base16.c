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
	int dgt = 48; /*ascii for number 0*/

	while (dgt <= 102)
	{
		putchar(dgt);
		if (dgt == 57)
			dgt += 39;
		dgt++;
	}
	putchar('\n');
	return (0);
}
