#include "main.h"
/**
 * _strcat -> a funtion that concancate two strings
 * @src: source file for the two strings
 * @dest: destination file for the strings
 * Return: pointer resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (len[dest])
		len++;

	for (i = 0; src[i] != '\0'; i++)
	{
		len[dest] = src[i];
		len += 1;
	}
	dest[len] = '\0';
return (dest);
}
