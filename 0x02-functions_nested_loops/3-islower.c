#include "main.h"

/**
 * islower - entry point
 *
 * Description:A program that checks for lowercase letter
 *
 * Return: 1(success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
