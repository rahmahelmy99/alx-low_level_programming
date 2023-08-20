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
	unsigned long f1 = 0, f2 = 1, sum;
	long even;

	while (1)
	{
		sum = f1 + f2;
		if (sum < 4000000)
			break;
		if ((sum % 2 == 0))
		{
			even += sum;
		}
		f1 = f2;
		f2 = sum;
	}
	printf("%ld\n", even);
	return (0);
}
