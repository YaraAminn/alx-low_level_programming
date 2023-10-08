#include "main.h"
/**
 * swap_int - a function to switch between the two
 * variables a and b
 *
 * @a: first parameter to swap
 * @b: second parameter to swa
 *
 * Return: success
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
