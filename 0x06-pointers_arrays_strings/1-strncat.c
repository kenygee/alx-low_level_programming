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
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_le++] = src[index];

	return (dest);
}
