#include "main.h"
/**
 * _memcpy - a function that copy n bytes from memory
 * area src to memory area dest
 *
 * @n: no of copy bytes
 * @src: bytes from memory area
 * @dest: bytes to be copied into
 *
 * Return: a pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
