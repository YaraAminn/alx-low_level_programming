#include "main.h"

/**
 * reverse_array - a function to get a reverse of array
 *
 * @a: pointer of array
 * @n: number of indexs
 */

void reverse_array(int *a, int n)
{
	int i = 0, j, x;

	j = n - 1;

	for (i = 0; i < j; i++)
	{
		x = a[i];
		a[i] = a[j];
		a[j] = x;
		j--;
	}

}
