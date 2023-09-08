#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print the value of n status as greater than,
 * zero, and not less than
 *
 * Return: always 0(success)
*/

int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	if (digit > 5)
	{
		printf("Last digit of");
	return (0);
}
