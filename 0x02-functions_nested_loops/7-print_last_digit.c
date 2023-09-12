#include "main.h"

/**
 * print_last_digit - print the last digi of a numbert
 *
 * @num : the number to be printed
 *
 * Description : write a program to print the last digit num
 * Return: value of the last digit number
 */

int print_last_digit(int num)
{
	int l_n;

	l_n = num % 10;
	if (l_n < 0)
	{
		l_n = l_n * -1;
	}
	_putchar(l_n + '0');
	return (l_n);
}
