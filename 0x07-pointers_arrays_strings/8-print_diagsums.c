#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_diagsums - print the sum of two diagona of a square
 *@a: pointer to tyhe start of a matrix
 *@size: the matrix diamension
 *
 *Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, k, l = 0, r = 0;

	for (i = 0; i < size; i++)
	{
		p = (i * size) + i;
		l += *(a + p);
	}
	for (j = 0; j < size; j++)
	{
		p = (j * size) + (size - l - j);
		r += *(a + p);
	}
	printf("%i, %i\n", l, r);
}
