#include <stdio.h>
#include "main.h"

/**
 * main - entry point.
 *
 * Description: program to print "_putchar".
 *
 * Return: return value is 0 means success.
 *
*/

int main(void)
{
	char s[] = "_putchar";
	int c;

	for (c = 0; c < 8; c++)
		_putchar(s[c]);
	_putchar('\n');
	return (0);
}
