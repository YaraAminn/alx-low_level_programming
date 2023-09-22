#include "main.h"
/**
 * leet - a function to encode 1337
 *
 * @str: parameter string encoded
 *
 * Return: string success
 */
char *leet(char *str)
{
	int i, j;
	char c[] = "aAeEoOtTlL";
	char y[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (str[i] == c[j])
			{
				str[i] = y[j];
			}
		}
	}
	return (str);
}
