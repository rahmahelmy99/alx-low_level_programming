#include "dog.h"
#include <stdio.h>
/**
 * init_dog - prototype function that initialize a
 * variable of type struct dog.
 * @d: new struct.
 * @name: input name.
 * @age: input age.
 * @owner: input owner.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
