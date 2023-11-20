#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * positive_or_negative - prototype function.
 *
 * Description: prgram to check the number is positive or negative.
 *
 * Return: return value is 0 means success.
*/

void positive_or_negative(int i)
{
	srand(time(0));
	i = rand() - RAND_MAX / 2;
	if (i > 0)
	{
		printf("%u is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%i is negative\n", i);
	}
	else if (i == 0)
	{
		printf("0 is zero\n");
	}
}
