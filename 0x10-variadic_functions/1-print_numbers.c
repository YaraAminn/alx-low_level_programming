#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers,
 * followed by a new line
 *
 * @separator: the string to be printed between nums
 * @n: the number of integers passed to function
 *
 * Return: null if separtor null
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, Array;

	va_list pointer;

	va_start(pointer, n);

	for (i = 0; i < n; i++)
	{
		Array = va_arg(pointer, const unsigned int);
		printf("%d", Array);
	if (i != (n - 1) && separator != NULL)
	{
		printf("%s", separator);
	}
	}
	printf("\n");
	va_end(pointer);
}
