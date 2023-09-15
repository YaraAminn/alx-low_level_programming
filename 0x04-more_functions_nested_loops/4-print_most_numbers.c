#include "main.h"
/*
 * print_most_numbersprint_most_numbers - to print most numbers
 *
 * Return: success
 */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if ((c == '2') || (c == '4'))
		{
			continue;
		}
		_putchar(c);
	}
	_putchar('\n');
}
