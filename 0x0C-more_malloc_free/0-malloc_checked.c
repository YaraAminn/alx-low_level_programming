#include "main.h"
/**
 * malloc_checked - a function that allocates memory
 *
 * @b: input
 *
 * Return: 0 success
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer);
}
