#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point.
 *
 * Description: prgram to check the number is positive or negative.
 *
 * Return: return value is 0 means success.
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n>0)
	{
		printf("%u is positive\n", n);
	}else if(n<0)
	{
		printf("%i is negative\n", n);
	}else
	{
		printf("0 is zero\n");
	}
	return (0);
}
