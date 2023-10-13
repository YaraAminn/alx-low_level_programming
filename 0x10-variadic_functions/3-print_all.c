#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 *
 * @format: types of arguments passed to the function
 *
 * Return: any type of the required arguments
 */
void print_all(const char * const format, ...)
{
	int i, check;
	char *string;
	va_list specify;

	va_start(specify, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(specify, int));
				check = 0;
				break;
			case 'c':
				printf("%c", va_arg(specify, int));
				check = 0;
				break;
			case 'f':
				printf("%f", va_arg(specify, double));
				check = 0;
				break;
			case 's':
				string = va_arg(specify, char *);
				if (string == NULL)
					string = "(nil)";
				printf("%s", string);
				break;
			default:
				check = 1;
				break;
		}
		if (format[i + 1] != '\0' && check == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(specify);
}
