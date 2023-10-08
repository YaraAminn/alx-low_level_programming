#include "main.h"
/**
 *  _strlen - a function to gets the length of
 *  a string
 *
 * @s: string input
 *
 * Return: length (success)
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);

}
