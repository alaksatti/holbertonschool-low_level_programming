#include <stdlib.h>
#include "dog.h"

char *storecpy(char *s);


/**
 * new_dog - creates a new dog.
 * @name: pointer to dog name.
 * @age: age of dog.
 * @owner: name of dog owner.
 * Return: pointer to dog_t.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	if (!name || !owner)
		return (NULL);

	ptr = malloc(sizeof(dog_t));

	if (ptr)
	{

		ptr->name = storecpy(name);

		if (!ptr->name)
		{
			free(ptr);
			return (NULL);
		}

		ptr->age = age;

		ptr->owner = storecpy(owner);

		if (!ptr->owner)
		{
			free(ptr->name);
			free(ptr);
			return (NULL);
		}

	}

	return (ptr);

}
/**
 * storecpy - stores copy of a string.
 * @s: string.
 * Return: pointer to string.
 */
char *storecpy(char *s)
{
	unsigned int i;
	char *ptr;

	if (!s)
		return (NULL);

	for (i = 0; s[i] != '\0'; i++)
		;

	ptr = malloc(sizeof(char) * (i + 1));

	if (ptr)
	{
		for (i = 0; s[i] != '\0'; i++)
			ptr[i] = s[i];
		ptr[i] = '\0';
	}

	return (ptr);

}
