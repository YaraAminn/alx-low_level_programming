#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints the number of
 * arguments passed into it.
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 succes
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
