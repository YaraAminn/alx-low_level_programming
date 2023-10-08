/**
 * _isupper - Check if a letter is uppercase
 *
 * @c: The checked letter
 *
 * Return: 1 for uprcse letter,0 for anything else
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
