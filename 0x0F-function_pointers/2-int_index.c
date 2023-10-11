#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 *
 * @array: pointer to array that has int
 * @size: num of elements in the array
 * @cmp: pointer to the function to be used
 * to compare values
 *
 * Return: -1 for no element or size < 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}

