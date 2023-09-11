#include <stdio.h>
/**
 * main - entry point
 *
 * Description:A program that prints diff. combines of two digits
 *
 * Return: always 0(success)
 */
int main(void)
{
	int units = '0';
	int tens = '0';

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (units = '0'; units <= '9'; units++)
		{
			if (!((tens == units) || (tens > units)))
			{
				putchar(tens);
				putchar(units);
				if (!((units == '9' && tens == '8')))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return 0;
}
