#include "main.h"
/**
 * _strlen - find length of string
 *
 * @s: string
 *
 * Return: integer
 */
int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}

/**
 * *argstostr -  a function that concatenates all the
 * arguments of your program
 *
 * @ac: integer
 * @av: arguments
 *
 * Return: string
 */
char *argstostr(int ac, char **av)
{
	int i = 0;
	int c = 0;
	int j = 0;
	int x = 0;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (; i < ac; i++, c++)
		c += _strlen(av[i]);

	s = malloc(sizeof(char) * c + 1);

	if (s == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, x++)
		{
			s[x] = av[i][j];
		}
		s[x] = '\n';
		x++;
	}
	s[x] = '\0';
	return (s);
}
