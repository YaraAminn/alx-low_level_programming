#include "main.h"
/**
 * **alloc_grid - A  function that returns a pointer to
 * a 2 dimensional array of integers
 *
 * @width: 1st dimension
 * @height: 2nd dimension
 *
 * Return: array success
 */
int **alloc_grid(int width, int height)
{
	int **mat;
	int i;
	int j;

	mat = malloc(sizeof(*mat) * height);
	
	if (width <= 0 || height == 0 || mat ==0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i  < height; i++)
		{
			mat[i] = malloc(sizeof(**mat) * width);
			if (mat[i] == 0)
			{
				/** free element */
				while (i--)
					free(mat[i]);
			free(mat);
			return (NULL);
			}
			for (j = 0; j < width; j++)
			{
				mat[i][j] = 0;
			}
		}
	}
	return (mat);
}
