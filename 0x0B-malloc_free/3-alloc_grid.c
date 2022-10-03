#include "main.h"

/**
 *alloc_grid -  to a 2 dimensional array of integers
 *@width: the side of the array interger
 *@height: the height of the array interger
 *Return: return NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i = 0, j;

	if (width == 0 || height == 0)
		return (NULL);
	array = (int **) malloc(sizeof(int *) * height);
	if (array != NULL)
	{
		for (; i < height; i++)

		{
			array[i] = (int *) malloc(sizeof(int) * width);
			if (array[i] != NULL)
			{
				for (j = 0; j < width; j++)
					array[i][j] = 0;
			}
			else
			{
				while (i >= 0)
				{
					free(array[i]);
					i++;
				}
				free(array);
				return (NULL);
			}
		}
		else
		{
			return (NULL);
		}
	}
}
