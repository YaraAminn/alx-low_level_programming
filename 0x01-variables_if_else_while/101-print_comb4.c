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
	int hund = '0';
	int ten = '0';
	int unit = '0';

	for (hund = '0'; hund <= '9'; hund++)
	{
		for (ten = '0'; ten <= '9'; ten++)
		{
			for (unit = '0'; unit <= '9'; unit++)
			{
				if (!((hund == ten) || (ten == unit) || (hund > ten) || (ten > unit)))
				{
					putchar(hund);
					putchar(ten);
					putchar(unit);
					if (!((hund == '7') && (ten == '8') && (unit == '9')))
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
