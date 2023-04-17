#include "dog.h"

/**
 * init_dog - initiatiles a struct.
 *
 * @d: pointer to struct passed for initialization.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of dog.
 *
 * Return: Nothing.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
