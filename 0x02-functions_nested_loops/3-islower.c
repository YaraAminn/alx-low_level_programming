#include "main.h"

/**
 * islower - check for lowercase letter
 *
 * Description:A program that checks for lowercase letter
 * c : is the checked character
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
