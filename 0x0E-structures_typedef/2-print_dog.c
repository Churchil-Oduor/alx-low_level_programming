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
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", name);

		if (age <= 0)
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", age);
		if (owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", owner);
	}

}
