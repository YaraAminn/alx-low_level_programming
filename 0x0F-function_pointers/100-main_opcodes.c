#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes -  program that prints the opcodes
 * of its own main function
 *
 * @a: main function location address
 * @nbytes: number of bytes printed
 *
 * Return: void
 */
void print_opcodes(char *a, int nbytes)
{
	int i;

	for (i = 0; i < nbytes; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < nbytes - 1)
			printf(" ");
	}
	printf("\n");
}
/**
 * main - program that prints the opcodes
 * of its own main function.
 *
 * @argc: arguments counted
 * @argv: argument pointer vector
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int nbytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	nbytes = atoi(argv[1]);
	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, nbytes);
	return (0);

}
