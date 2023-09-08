#include <stdio.h>
/**
 * main - entry point
 *
 * Description:A program that prints numbers from 0To9
 *
 * Return: always 0(success)
 */
int main(void)
{
	int numb = 0;

	for (numb <= 9; numb++;)
	{
		putchar(numb);
	}
	putchar('\n');
	return (0);

}

