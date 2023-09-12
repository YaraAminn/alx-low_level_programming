#include "main.h"

/**
 * print_alphabet_x10- entry point
 *
 * Descriptioogram prints alphabet in lw_cse 10times
 *
 * Return: always 0(success)
 */

void print_alphabet_x10(void)
{
	char alph;
	int x;

	for (x= 0; x < 10; x++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}
}
