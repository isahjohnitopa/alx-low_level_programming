#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - the struct data type
 * @name: the name field
 * @age: the age field
 * @owner: the owner field
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

 void init_dog(struct dog *d, char *name, float age, char *owner);


#endif /* DOG_H */
