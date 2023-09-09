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

	printf("Size of a char: %ld byte(s)\n", sizeof(y));
	printf("Size of an int: %ld byte(s)\n", sizeof(a));
	printf("Size of a long int: %ld byte(s)\n", sizeof(b));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(l));
	printf("Size of a float: %ld byte(s)\n", sizeof(z));
return (0);
}
