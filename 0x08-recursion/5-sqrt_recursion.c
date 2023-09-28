#include "main.h"
/**
 * _sqrt_recursion - a function to
 * get the square root of a number
 *
 * @n: the input no
 *
 * Return: -1 error
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (final_sqrt_recursion(n, 0));
}

/**
 * final_sqrt_recursion - a function to get
 * the square root of a number
 *
 * @n: the 1st input
 * @x: the 2nd input
 *
 * Return: 1 success
 */
int final_sqrt_recursion(int n, int x)
{
	if (x * x > n)
	{
		return (-1);
	}
	if (x * x == n)
	{
		return (x);
	}
	return (final_sqrt_recursion(n, x + 1));
}
