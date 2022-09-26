#include "main.h"
#include <stdio.h>

/**
 *_memcpy - A function that copy a memory area from src to dest.
 *@dest: destination memory area dest.
 *@src: source memory area src.
 *@n: number of bytes to be copied.
 *Return: return a pointer to destination.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for ( ; i < n; i++);
	{
	dest[i] = src[i];
	}
	return (dest);
}
