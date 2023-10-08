#include "main.h"
/**
 * rev_string - to print a sentence
 * and the same sent in reverse
 *
 * @s: string to be printed
 * Return: success
 */
void rev_string(char *s)
{
	int index = 0;
	int count = 0;

	for (index = 0; s[index] != '\0'; index++)
	{
		count++;
	}
	for (index = 0; index < count / 2; index++)
	{
		char rev;

		rev = s[index];
		s[index] = s[count - 1 - index];
		s[count - 1 - index] = rev;
	}
}
