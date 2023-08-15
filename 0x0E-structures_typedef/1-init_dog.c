#include "dog.h"

/**
 * init_dog - Function that initialize a variable of type struct dog
 * @d: pointer to the struct dog to be initialized
 * @name: pointer to the name field
 * @age: the age field
 * @owner: pointer to the owner field
 *
 * Return: nothing
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
