#include "main.h"
/**
 * _strpbrk -  a function that searches a string for
 * any of a set of bytes
 *
 * @s: the searched string
 * @accept: the number of bytes to
 * be searched for
 *
 * Return: if bytes matched return a pointer
 * else return null
 */
char *_strpbrk(char *s, char *accept)
{
	int indx;

	while (*s)
	{
		for (indx = 0; accept[indx]; indx++)
		{
			if (*s == accept[indx])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
