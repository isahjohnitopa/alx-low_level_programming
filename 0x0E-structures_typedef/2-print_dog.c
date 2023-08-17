#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 * @d: pointer to the struct dog, whose elements are to be printed
 *
 * Return: Return nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("(nil)");
		if (d->age != NULL)
			printf("Age: %d\n", d->age)
		else
			printf("(nil)");
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("(nil)");
	}
}
