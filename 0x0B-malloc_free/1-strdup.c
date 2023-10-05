#include "main.h"
/**
 * * *_strdup -  function that returns a pointer to
 * a newly allocated space in memory
 *
 * @str: string
 *
 * Return: 0 success
 */
char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *mem;

	if (str == NULL)
	{
		return (NULL);
	}
	for (; str[size] != '\0'; size++)
	;

	mem = malloc(size * sizeof(*str) + 1);

	if (mem == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < size; i++)
		{
			mem[i] = str[i];
		}
	}
	return (mem);
}


