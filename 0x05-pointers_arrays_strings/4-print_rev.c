#include "main.h"
/**
 * print_rev - a function that
 * prints a reverse sentence
 *
 * @s: string
 *
 * Return: success
 */

void print_rev(char *s)
{
	int index;
	int cou = 0;

	for (index = 0; s[index] != '\0'; index++)
	{
		cou++;
	}
	for (index = cou - 1; index >= 0; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');

}
