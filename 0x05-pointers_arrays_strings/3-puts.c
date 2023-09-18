#include "main.h"
/**
 * _puts - a function to print
 * a string
 *
 * @str: parameter to print
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
	putchar('\n');
}
