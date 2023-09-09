#include <stdio.h>
/**
 * main - entry point
 *
 * Description:A program that prints the hexadecimal num
 *
 * Return: always 0(success)
 */
int main(void)
{
	int num;
	int lett;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}
	for (lett = 97; lett <= 102; lett++)
	{
		putchar(lett);
	}
	putchar('\n');
	return (0);
}
