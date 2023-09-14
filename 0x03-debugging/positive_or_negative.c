#include "main.h"
/**
 * positive_or_negative - Determine if anum is positive,negative or zero
 * 0 : is the checked number
 * Return: 0 on success
 * @i : the checked number
 */
void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is %s\n", i, "negative");
	}
	else if (i == 0)
	{
		printf("%d is %s\n", i, "zero");
	}
	else
	{
		printf("%d is %s\n", i, "positive");
	}
	return;
}
