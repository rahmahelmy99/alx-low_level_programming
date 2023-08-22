#include "main.h"
#include <stdio.h>

/**
 * swap_int - prototype function that swaps the
 * values of two integers.
 *
 *@a: first input that pointer will point to.
 *@b: second input that pointer will point to.
 *
 * Return: 0 if success.
 *
*/

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
