#include "main.h"

/**
 * _memset - fils a memory with a constant bytes
 * @s: pointer of the memory block
 * @b: char to be used
 * @n: number of bytes to used
 * Return: return pointer to the memory block
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
