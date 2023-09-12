#include "main.h"
/**
 * int_isalpha - Checks for alphabetic letter
 *
 * @c : The checked character
 *
 * Return : 1 for letter or 0 for anyother char
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

