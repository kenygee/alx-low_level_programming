#include "main.h"
/**
 * _strncat -> a function that will use at most n bytes from src
 * @dest: first parameter
 * @src: secind parameter
 * @n: third parameter
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	_strncat(*dest, *src, n);
	return (dest);
}
