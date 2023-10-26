#include "main.h"
/**
 * clear_bit - function that sets the
 * value of a bit to 0 at a given index
 *
 * @n: integer pointer
 * @index: index integer
 *
 * Return: 1 if it worked,or -1 if error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int manip = 1;

	manip = manip << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
	{
		return (-1);
	}
	if (((*n >> index) & 1) == 1)
	{
		*n = manip ^ *n;
	}
	return (1);

}
