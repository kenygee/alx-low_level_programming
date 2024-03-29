#include "main.h"
#include <string.h>

/**
 * _strncat -> a function that will use at most n bytes from src
 * @dest: first parameter
 * @src: secind parameter
 * @n: third parameter
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)

{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
	i++;
	j = 0;
	while (src[j] != '\0' && j < n)
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
	}
}
