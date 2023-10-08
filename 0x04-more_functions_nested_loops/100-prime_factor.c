#include "main.h"
#include <stdio.h>
/**
 * main - entry of the program
 *
 * Description : write a program to find
 * the largest prime factor
 * of 612852475143
 *
 * Return: 0 success
 */

int main(void)
{
	unsigned long int x, y = 612852475143;

	for (x = 3; x < 782849; x = x + 2)
	{
		while ((y % x == 0) && (y != 1))
		{
			y = y / x;
		}
	}
	printf("%lu\n", y);
	return (0);
}
