#include "dog.h"
#include <stdlib.h>

/**
 * int_dog - function that initialize a variable of type struct dog
 * @d: name of struct
 * @name: name of dog in the struct
 * @age: age of the dog in the struct
 * @owner: name of the dog owner in the struct
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
