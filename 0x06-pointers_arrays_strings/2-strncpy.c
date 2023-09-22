#include "main.h"

/**
 * _strncpy - a function to copy strings
 *
 * @dest: destination string
 * @src: source if string
 * @n: number of bytes to copy
 *
 * Return: dest success
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
