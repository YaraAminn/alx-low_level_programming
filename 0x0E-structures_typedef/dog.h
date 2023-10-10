#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - create information of dog
 *
 * @name: dog name string
 * @age: age of dog in decimal
 * @owner: dog owner char
 *
 * Description: data_structure in c
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;

} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
