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
	int i;

	for (i = 0; i <= 50; i++)
	{
		sum = f1 + f2;
		printf("%ld", sum);

		f2 = f1;
		f2 = sum;

		if (i <= 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
