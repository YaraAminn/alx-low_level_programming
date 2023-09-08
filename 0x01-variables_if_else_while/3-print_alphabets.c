#include <stdio.h>
/**
 * main - entry point
 *
 * Descriptipn: A program prints the alphabet in lowercase,and then in uppercase
 *
 * Return: always 0(success)
 */

int main(void)
{
	int l = 97;
	int c = 65;

	while (l <= 122)
	{
		putchar(l);
		l++;
	}
	while (c <= 90)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);

}




