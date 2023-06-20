#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 * @d: struct dog pointer
 */

void print_dog(struct dog *dodge)

{
	char *name, *owner;

	if (dodge)
	{
		name = dodge->name;
		owner = dodge->owner;

		if (!name)
			name = "(nil)";
		if (!owner)
			owner = "(nil)";
		printf("Name: %s\nAge: %f\nOwner: %s\n", name, dodge->age, owner);
	}
}
