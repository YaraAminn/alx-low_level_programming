#include "main.h"
/**
 * flip_bits - function that returns the number of
 * bits you would need to flip to get from number to another
 *
 * @n: input integer
 * @m: input integer
 *
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned long int counter;

	result = n ^ m;
	for (counter = 0; result > 0;)
	{
		if ((result & 1) == 1)
		{
			counter++;
		}
		result = result >> 1;
	}
	return (counter);
}
