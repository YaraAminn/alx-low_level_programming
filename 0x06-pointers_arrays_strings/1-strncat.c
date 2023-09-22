#include <string.h>
/**
 * _strncat - a function to 
 * concatenate two strings
 *
 * @dest: destination string
 * @src: source of string
 * @n: number of bytes
 *
 * Return: dest success
 */

char *_strncat(char *dest, char *src, int n)
{
	int length = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[length + i] = *src;
		src++;
	}
	dest[length + i] = '\0';
	return (dest);
}
