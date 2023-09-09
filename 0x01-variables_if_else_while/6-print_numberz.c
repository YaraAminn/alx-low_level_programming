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
	int numb;

	for (numb = 0; numb <= 9; numb++)
	{
		putchar(numb + 48);
	}
	putchar('\n');
	return (0);

}

