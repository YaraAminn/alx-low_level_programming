#include "main.h"

/**
*_abs - Entry point to compute the abs value of a number
*
* @c :The computed number
* Description : program that prints the asb val of num
* Return: Absolue value of a number or 0
*/

int _abs(int c)

{
	if (c < 0)
	{
		int a;

		a = c * -1;
		return (a);
	}
	return (c);
}
