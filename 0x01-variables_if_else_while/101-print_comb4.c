#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Program that prints poss. diff. combines of 3digits
 *
 * Return: always 0(success)
 */
int main(void)
{
	int hunds = '0';
	int tens = '0';
	int units = '0';

	for (hunds = '0'; hunds <= '9'; hunds++)
	{
		for (tens = '0'; tens <= '9'; tens++)
		{
			for (units = '0'; units <= '9'; units++)
			{
				if(!((hunds == tens) || (tens == units) || (hunds > tens) || (tens > units)))
				{
					putchar(hunds);
					putchar(tens);
					putchar(units);
					if(!((hunds == '7') && (tens == '8') && (units == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
