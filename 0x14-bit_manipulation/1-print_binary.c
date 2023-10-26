#include "main.h"
/**
 * print_bin - print binary numbers
 *
 * @n: input integer
 * Return: void
 */
void print_bin(unsigned long int n)
{
	if (n == 0)
		return;
	print_bin(n >> 1);

	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 0) == 0)
		_putchar('0');
}
/**
 * print_binary - function that prints the binary
 * representation of a number
 *
 * @n: input number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		print_bin(n);
	}
}
