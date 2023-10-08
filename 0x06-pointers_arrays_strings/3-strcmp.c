#include "main.h"
/**
 * _strcmp - a function to compare 2 strings
 *
 * @s1: 1st parameter string
 * @s2: 2nd parameter string
 *
 * Return: int success
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] < s2[i])
			{
				return (s1[i] - s2[i]);
			}
			else if (s1[i] > s2[i])
			{
				return (s1[i] - s2[i]);
			}
		}
	}
	return (0);
}
