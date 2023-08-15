#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point.
 *
 * Description:the program that print the last digit of the number.
 *
 * Return: return value is 0 means success.
*/
int main(void)
{
	int n;
	int l_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l_digit = n % 10;
	if (l_digit > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, l_digit);
	}
	else if (l_digit < 6 && l_digit != 0)
	{
		 printf("Last digit of %i is %i and is less than 6 and not 0\n", n, l_digit);
	}
	else
	{
		 printf("Last digit of %i is %i and is 0\n", n, l_digit);
	}
	return (0);
}
