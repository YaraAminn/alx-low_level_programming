#include <stdio.h>
/**
 * main - entry point
 *
 * Description:A program that prints all possible chars
 *
 * Return: always 0(success)
 */
int main(void)
{
	int Numb;

	for (Numb = 48; Numb <= 57; Numb++)
	{

		putchar(Numb);
		if (Numb == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
