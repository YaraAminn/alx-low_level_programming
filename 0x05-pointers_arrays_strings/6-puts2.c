#include "main.h"

/**
 * puts2 - a function to print the
 * only even indexes of a certain
 * string
 *
 * @str: string to be printed
 * Return: success
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
