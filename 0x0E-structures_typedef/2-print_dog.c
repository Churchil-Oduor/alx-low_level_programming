#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints details of dog.
 *
 * @d: pointer to memory holding struct d.
 *
 * Return: Nothing.
 */

void print_dog(struct dog *d)
{
	char *name, *owner;
	float age;

	if (d != NULL)
	{

		name = (d->name);
		age = (d->age);
		owner = (d->owner);

		if (name == NULL)
			name = "(nil)";
		else if (owner == NULL)
			owner = "(nil)";

		printf("Name: %s\nAge: %f\nOwner: %s\n", name, age, owner);
	}

}
