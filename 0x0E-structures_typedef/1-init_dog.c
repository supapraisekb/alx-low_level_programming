#include "dog.h"

/**
 * init_dog - initialize a type struct called dog
 * @d: pointer to the dog struct
 * @name: the dog's name
 * @age: the dog's age
 * @owner: label for the dog's owner
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
