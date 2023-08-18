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
	int dgt3;

	while (dgt1 <= 9)
	{
		dgt2 = 0;
		while (dgt2 <= 9)
		{
			dgt3 = 0;
			while (dgt3 <= 9)
			{
				if (dgt1 != dgt2 && dgt2 != dgt3 &&
				    dgt1 < dgt2 && dgt2 < dgt3)
				{
					putchar(dgt1 + 48);
					putchar(dgt2 + 48);
					putchar(dgt3 + 48);
				
					if (dgt1 + dgt2 + dgt3 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				dgt3++;
			}
			dgt2++;
		}
		dgt1++;
	}
	putchar('\n');
	return (0);
}
