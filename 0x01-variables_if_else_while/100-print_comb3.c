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
	int dgt1 = 0;
	int dgt2;

	while (dgt1 <= 9)
	{
		dgt2 = 0;
		while (dgt2 <= 9)
		{
			if (dgt1 != dgt2 && dgt1 < dgt2)
			{
				putchar(dgt1 + 48);
				putchar(dgt2 + 48);
				if (dgt1 + dgt2 != 17)
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
