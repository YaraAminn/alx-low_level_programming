#include "main.h"
/**
 * _strstr - a function to locate substring
 *
 * @haystack: the string searched in
 * @needle: the searched string
 *
 * Return: a pointer if substring located
 * return null when substring not found
 */
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
	{
		return (haystack);
	}
	while (*haystack)
	{
		index = 0;
		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);
				index++;
			}	while (haystack[index] == needle[index]);
		}
		haystack++;
	}
	return ('\0');
}
