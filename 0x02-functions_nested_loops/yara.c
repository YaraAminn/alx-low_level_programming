#include <stdio.h>

int main(void)
{
	int x,a;
	for (x = 0; x <= 9; x++)
	{
		a= x * 9;
		putchar(x);
		putchar(a);
	}
	putchar('\n');
	return (0);
}
