#include "dog.h"

/**
 * init_dog - initializes the variable struct dog.
 * @d: structure to be initialized.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: dog owner name.
 * Return: nothing.
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
