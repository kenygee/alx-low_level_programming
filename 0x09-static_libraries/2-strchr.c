#include "main.h"

/**
 *_strchr - a function that locates a character in a string.
 *@s: string to check charater
 *@c: charter to checkout for
 *Return: point first occurrence of the character c in the string s, or 0.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++);
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
