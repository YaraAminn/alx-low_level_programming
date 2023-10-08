/**
 * _isdigit - check if c is a number or not
 *
 * @c: The checked number
 *
 * Return: 1 for numbers,0 for anything else
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
