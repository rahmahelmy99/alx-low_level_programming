#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prototype function that prints a name.
 * @name: pointer to character.
 * @f: pointer to function with a pointer to char as argument.
 *
 * return: nothing.
*/
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
