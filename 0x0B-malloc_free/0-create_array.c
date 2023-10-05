#include "main.h"
/**
 * *create_array - a function to create array 
 * of chars
 *
 * @c: initialized char
 *
 * Return: pointer array null or not
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size);

	if (size == 0 || arr == 0)
	{
		return (0);
	}
	while (size--)
	{
		arr[size] = c;
	}
	return (arr);
}
