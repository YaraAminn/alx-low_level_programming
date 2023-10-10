#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * is_digit - check if a string contains
 * a non digit char
 * @str: checked string
 *
 * Return: 0 if non digit, 1 if digit
 */

int is_digit(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/**
 * str_len - function to return string length
 * @str: checked string
 * Return: string length
 */
int str_len(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * Error - fix and solve the errors
 */
void Error(void)
{
	printf("There is an error\n");
	exit(98);
}

/**
 * main - function to multiply 2 pos nums
 * @argc: no of arguments
 * @argv: array of arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, i, hold, dig1, dig2, *res, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		Error();
	len1 = str_len(s1), len2 = str_len(s2);
	len = len1 + len2 + 1;
	res = malloc(len * sizeof(int));
	if (!res)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		res[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		dig1 = s1[len1] - '0';
		hold = 0;
		for (len2 = str_len(s2) - 1; len2 >= 0; len2--)
		{
			dig2 = s2[len2] - '0';
			hold = hold + res[len1 + len2 + 1] + (dig1 * dig2);
			res[len1 + len2 + 1] = hold % 10;
			hold = hold / 10;
		}
		if (hold > 0)
			res[len1 + len2 + 1] += hold;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (res[i])
			a = 1;
		if (a)
			_putchar(res[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}

