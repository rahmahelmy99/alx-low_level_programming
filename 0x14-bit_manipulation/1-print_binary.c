#include "main.h"
/**
 * print_binary -  function that prints the binary representation of a number.
 * @n: binary number.
 * Return: nothing.
*/

void print_binary(unsigned long int n)
{
	int digit = sizeof(n) * 8;
	int bnum = 0;

	while(digit)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			bnum++;
		}
		else if (bnum == 0)
			_putchar('0');
	}
	if (!bnum)
		return ('0');
}
