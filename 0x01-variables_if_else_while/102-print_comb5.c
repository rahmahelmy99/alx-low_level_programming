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
	int dgt2, dgt3, dgt4;

	while (dgt1 <= 9)
	{
		dgt2 = 0;
		while (dgt2 <= 9)
		{
			dgt3 = 0;
			while (dgt3 <= 9)
			{
				dgt4 = 0;
				while (dgt4 <= 9)
				{
					if (dgt1 != dgt2 &&
						dgt2 != dgt3 &&
						dgt3 != dgt4 &&
						dgt1 < dgt2 &&
						dgt2 < dgt3 &&
						dgt3 <  dgt4)
					{
						putchar(dgt1 + 48);
						putchar(dgt2 + 48);
						putchar(' ');
						putchar(dgt3 + 48);
						putchar(dgt4 + 48);
						if (dgt1 + dgt2 + dgt3 + dgt4 == 35)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
