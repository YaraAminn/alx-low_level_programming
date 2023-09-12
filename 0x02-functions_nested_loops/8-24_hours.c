#include "main.h"

/**
 * jack_bauer(void) - Entry Point to Print every min of the day
 *
 * Return : ...
 * 
 */

void jack_bauer(void)
{
	int m , n , o , l;

	for (m = 0; m <= 2; m++)
	{
		for (n = 0; n <= 9; n++)
		{
			if ((m <= 1 && n <= 9) || (m <= 2 && n <=3))
			{
				for (o = 0; o <= 5; o++)
				{
					for (l = 0; l <= 9; l++)
					{
						_putchar(m + '0');
						_putchar(n + '0');
						_putchar(58);
						_putchar(o + '0');
						_putchar(l + '0');
						_putchar('\n');
					}
				}

			}
		}	
	}
}
