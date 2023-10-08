#include "main.h"
/**
 * _pow_recursion - a function to print
 * the power of a number
 *
 * @x: the first number
 * @y: the second number
 *
 * Return: 1 (success), -1 (error)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
