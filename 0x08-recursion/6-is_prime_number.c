#include "main.h"
/**
 * is_prime_number - a function to find the
 * prime number
 *
 * @n: input number
 *
 * Return: 0 error
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (final_prime_number(n, n - 1));
}

/**
 * final_prime_number - a function to
 * find the prime number
 *
 * @n: first number
 * @x: 2nd number
 *
 * Return: 1 success , 0 fail
 */
int final_prime_number(int n, int x)
{
	if (x == 1)
	{
		return (1);
	}
	if (n % x == 0 && x > 0)
	{
		return (0);
	}
	return (final_prime_number(n, x - 1));
}
