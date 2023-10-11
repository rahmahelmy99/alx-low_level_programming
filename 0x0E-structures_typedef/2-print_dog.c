#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prototype function that prints a
 * struct dog.
 * @d: a struct copy.
 *
 * Return: nothing.
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: %s\n", "(nil)");

		if (d->age)
			printf("Age: %f\n", d->age);

		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: %s\n", "(nil)");
	}
}
