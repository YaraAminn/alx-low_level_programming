#include "main.h"
/**
 * isalpha - Checks for any alphabetic character
 *
 * @c : The checked character
 *
 * Descrption : A program to check any alphabetic character
 *
 * Return : 1(for any alphabetic character) or 0(for anything else)
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}


}

