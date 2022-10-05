#include "main.h"


/**
 *_strspn - get lenght of the prefix substrings
 *@s: substrings pointer
 *@accept: strings to check again
 *Return: contain only bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			break;
		}
		if (!accept[j])
			break;
	}
	return (1);
}
