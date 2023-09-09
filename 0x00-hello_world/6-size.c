#include <stdio.h>
/**
 * main - entry point
 *
 * Description:A program that prints size of variables
 *
 * Return: always 0(success)
*/

int main(void)
{
int a;
char y;
long int b;
float z;
long long int l;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(y));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a float: %lu byte(s)", (unsigned long)sizeof(z));
return (0);
}
