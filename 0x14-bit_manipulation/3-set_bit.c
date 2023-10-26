#include "main.h"
/**
 * set_bit - function that sets the value of a bit to
 * 1 at a given index
 *
 * @n: pointer integer
 * @index: index to be got
 *
 * Return: 1 success or -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int manip;

	if (index > sizeof(unsigned int) * 8)
		return (-1);

	manip = 1;
	manip = manip << index;
	*n = ((*n) | manip);
	return (1);
}
