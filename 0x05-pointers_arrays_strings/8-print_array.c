#include "main.h"
#include <stdio.h>

/**
 * print_array - a function to get
 * the values of each index of
 * an array
 *
 * @a: input
 * @n: tne number of array index
 *
 * Return: success
 */
void print_array(int *a, int n)
{

	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
