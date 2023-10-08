#include "main.h"
/**
 * _strlen_recursion - a function to get
 * the length of a string
 *
 * @s: the length printed
 *
 * Return: string length (success)
 */
int _strlen_recursion(char *s)
{
	int len_st = 0;

	if (*s)
	{
		len_st++;
		len_st += _strlen_recursion(s + 1);
	}
	return (len_st);
}
