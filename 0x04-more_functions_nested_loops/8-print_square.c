#include "main.h"

/**
 *  print_square - to print a square
 *
 * @size: declared value
 *
 * Return: success
 */

void print_square(int size)
{
	int i;
	int x;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (x = 0; x < size; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
