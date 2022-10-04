#inclde "main.h"

/**
 *free_grid - Print a grid of integer
 *@grid: the address of two grid interger
 *@height: the height of teh grid
 *Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
