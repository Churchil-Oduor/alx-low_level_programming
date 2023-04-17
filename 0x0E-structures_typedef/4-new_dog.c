#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new dog.
 *
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of dog.
 * 
 * Return: pointer to new dog in memory.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	doggy = malloc(sizeof(*doggy));

	if (doggy == NULL)
		return (NULL);

	if (name == NULL)
		doggy->name = "(nil)";
	else
		doggy->name = name;

	if (owner == NULL)
		doggy->owner = "(nil)";
	else
		doggy->owner = owner;

	doggy->age = age;

	return (doggy);
}
