#include <stdio.h>
/**
 * main - entry point
 *
 * Description:A program that prints the alphabet in lowercase
 *
 * Return: always 0(success)
 */
int main(void)
{
	int A = 122;

	while (A >= 97)
	{
		putchar(A);
		A--;
	}
	putchar('\n');
	return (0);
}

