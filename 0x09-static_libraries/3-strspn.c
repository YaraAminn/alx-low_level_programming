#include "main.h"
/**
 * _strspn - a function to get the length of a
 * prefix substring
 *
 * @s: the searched string
 * @accept: the counted prefix
 *
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int byte = 0;
	int indx;

	while (*s)
	{
		for (indx = 0; accept[indx]; indx++)
		{
			if (*s == accept[indx])
			{
				byte++;
				break;
			}
			else if (accept[indx + 1] == '\0')
			{
				return (byte);
			}
		}
		s++;
	}
	return (byte);
}
