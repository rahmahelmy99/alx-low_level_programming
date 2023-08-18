#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: program that prints all possible
 * combinations of two two-digit numbers.
 *
 * Return: return value is 0 means success.
 *
*/

int main(void)
{
	int dgt1 = 0;
	int dgt2;

	while (dgt1 <= 99)
	{
		dgt2 = dgt1;
		while (dgt2 <= 99)
		{
			if (dgt1 != dgt2 && dgt1 < dgt2)
			{
				putchar((dgt1 / 10) + 48);
				putchar((dgt1 % 10) + 48);
				putchar(' ');
				putchar((dgt2 / 10) + 48);
				putchar((dgt2 % 10) + 48);
				if (dgt1 != 98 || dgt2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			dgt2++;
		}
		dgt1++;
	}
	putchar('\n');
	return (0);
}
