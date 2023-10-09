#include "main.h"
/**
 * _realloc - a function that reallocates a
 * memory block using malloc and free
 *
 * @ptr: char pointer
 * @old_size: input int
 * @new_size: input int
 *
 * Return: new pointer or Null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < new_size && i < old_size; i++)
	{
		new_ptr[i] = ((char *) ptr)[i];
	}

	free(ptr);
	return (new_ptr);

}
