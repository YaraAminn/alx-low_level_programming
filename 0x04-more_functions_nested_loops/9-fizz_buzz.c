#include <stdio.h>
#include "main.h"

/**
 * main - entry of program
 *
 * Description: write a program to print from 1:100
 *
 * Return: 0 success
 */
int main(void)

{
int i;

for (i = 1; i <= 100; i++)
{
	if (i % 3 == 0)
	{
		printf("Fizz");
	}
	else if (i % 5 == 0)
	{
		printf("Buzz");
	}
	else if (i % 15 == 0)
	{
		printf("FizzBuzz");
	}
	else
	{
		printf("%i", i);
	}
	if (i < 100)
	{
		printf(" ");
	}
}
printf("\n");
return (0);
}
