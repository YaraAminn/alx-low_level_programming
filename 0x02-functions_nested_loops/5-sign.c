#include "main.h"

/**
 * print_sign - print the sign of a number
 *
 * @n : the character to be checked
 *
 * Description:A program that checks for the sign of num
 *
 * Return: 1( for positive num) or 0(for num=0) or -1(for negative num)
 */
int print_sign(int n)
{
	if (n>0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}

