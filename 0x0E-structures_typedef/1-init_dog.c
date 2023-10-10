#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - function that initialize a variable of
 * type struct dog
 *
 * @d: pointer of dog new struct
 * @name: string name input
 * @age: input age float
 * @owner: input owner name char
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d != NULL)
	{
	(*d).name = name;
	d->age = age;
	d->owner = owner;
	}
}
