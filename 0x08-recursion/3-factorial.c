#include "main.h"
/**
 * factorial - function to get the factotial
 * of any number
 *
 * @n: the input number
 *
 * Return: 1: succees, -1:error
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 1)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
