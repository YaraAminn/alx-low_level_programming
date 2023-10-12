#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum
 * of all its parameters
 *
 * @n: constant input
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int SUM = 0;

	va_list carry;

	va_start(carry, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			SUM += va_arg(carry, const unsigned int);
		}
	}
	va_end(carry);
	return (SUM);
}

