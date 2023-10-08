#include "main.h"
/**
 * print_triangle - program to print triangle
 *
 * @size: declared value of the triangle
 *
 * Return: void success
 */

void print_triangle(int size)
{
	int r, h, sp;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 1; r <= size; r++)
		{
			for (sp = size - r; sp >= 1; sp--)
			{
				_putchar(' ');
			}
			for (h = 1; h <= r; h++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
