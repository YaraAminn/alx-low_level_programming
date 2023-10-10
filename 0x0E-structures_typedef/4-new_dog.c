#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - function that creates a new dog
 *
 * @name: input dog name
 * @age: float dog age
 * @owner: input dog owner
 *
 * Return: pointer success
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nme, own, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (nme = 0; name[nme] != '\0'; nme++)
		;
	nme++;
	dog->name = malloc(sizeof(char) * nme);

	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < nme; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (own = 0; owner[own] != '\0'; own++)
		;
	own++;
	dog->owner = malloc(sizeof(char) * own);
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog);
		return (NULL);
	}

	for (i = 0; i < own; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
