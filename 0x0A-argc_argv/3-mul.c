#include "main.h"
#include <stdio.h>
/**
 * _atoi - convert a string to integer
 *
 * @s: the converted string
 *
 * Return: the integer converted from string
 */
int _atoi(char *s)
{
int i = 0;
int d = 0;
int n = 0;
int length = 0;
int f = 0;
int dig = 0;

while (s[length] != '\0')
length++;

while (i < length && f == 0)
{
	if (s[i] == '-')
	++d;
	if (s[i] >= '0' && s[i] <= '9')
	{
	dig = s[i] - '0';
	if (d % 2)
	{
	dig = -dig;
	}
	n = n * 10 + dig;
	f = 1;
	if (s[i + 1] < '0' || s[i + 1] > '9')
		break;
	f = 0;
	}
i++;
}

if (f == 0)
	return (0);
return (n);
}
/**
 * main - a program that multiplies two numbers
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0:success , 1:error
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}



