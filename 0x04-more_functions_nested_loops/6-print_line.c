#include "main.h"
/**
 * print_line - to draw a line
 *
 * @n: number of times
 *
 * Return: success
 */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
