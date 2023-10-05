#include "main.h"
/**
 * *str_len -  function that concatenates
 * two strings
 *
 * @s: string
 * Return: integer
 */
int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}
/**
 * *str_concat -  function that concatenates
 * two strings
 *
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: pointer success
 */

char *str_concat(char *s1, char *s2)
{
	int size1; 
	int size2;
	int i;
	char *mem;

	if (s1 == NULL)
	{
	s1 = "\0";
	}
	if (s2 == NULL)
	{
	s2 = "\0";
	}

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	mem = malloc((size1 + size2) *sizeof(char) + 1);

	if (mem == 0)
		return (0);

	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			mem[i] = s1[i];
		else
			mem[i] = s2[i - size1];
	}
	mem[i] = '\0';
	return (mem);
}
