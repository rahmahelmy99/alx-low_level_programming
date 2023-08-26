#include "main.h"
#include <stdio.h>

/**
 * reverse_array - prototype function that reverses the content
 *of an array of integers.
 *
 *@a: input array.
 *@n: input number.
 *
 * Return: 0 if success.
 *
*/

void reverse_array(int *a, int n)
{
	int i, j;
	int temp;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{	temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}

}
