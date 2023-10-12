#include "variadic_functions.h"
/**
 * print_strings - function that prints strings,
 * followed by a new line
 *
 * @separator: string to be printed between strings
 * @n: number of strings passed to function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *string;
	unsigned int i;

	va_list str_pointr;

	va_start(str_pointr, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(str_pointr, char *);

		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str_pointr);
}
