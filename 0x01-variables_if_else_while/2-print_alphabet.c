#include <stdio.h>
/**
 * main - entry point
 *
 * Description: A program prints the alphabet in lowercase
 *
 * Return: always 0(success)
 */

int main(void)
{
	int l = 97;
	while (l <= 122)
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}


