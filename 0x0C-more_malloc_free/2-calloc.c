#include "main.h"
/**
 * _calloc -  function that allocates memory for
 * an array usiing malloc
 *
 * @nmemb: first integer input
 * @size: 2nd integer input
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, j = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	j = nmemb * size;
	ptr = malloc(j);
	if (ptr == NULL)
	{
		return (NULL);
	}

	while (i < j)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
