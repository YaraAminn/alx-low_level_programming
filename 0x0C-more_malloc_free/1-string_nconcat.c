#include "main.h"
/**
 * string_nconcat -  function that concatenates two strings
 *
 * @s1: 1st input string pointer
 * @s2: 2nd input string pointer
 * @n: integer
 *
 * Return: pointer to new allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t i, j, y;
	char *st;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
	}

	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j] != '\0'; j++)
			;
	}
	if (j >= n)
	{
		j = n;
	}
	st = malloc(sizeof(char) * (i + j + 1));

	if (st == NULL)
		return (NULL);

	for (y = 0; y < i; y++)
		st[y] = s1[y];

	for (y = 0; y < j; y++)
		st[y + 1] = s2[y];

	st[i + j] = '\0';
	return (st);
}
