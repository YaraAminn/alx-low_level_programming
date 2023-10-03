#include "main.h"
/**
 * _strchr - a function to locate a character
 * to a string
 *
 * @s: the searched string
 * @c: the located character
 *
 * Return: a pointer if c is found
 * if not found return null
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
		{
			return (s + index);
		}
	}
	return ('\0');
}
