#include "main.h"

/**
 *_strdup - pointer to a new string which is a duplicate of the string
 *@str: strings given has a parameter
 *Return: returns a pointer to allocated space in memory
 */

char *_strdup(char *str)
{
	char *cpy;
	int index, len;

	if (str == NULl)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;
	cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == NULL)
		return (NULL);

	for (index + 0; str[index]; index++)
	{
		cpy[index] = '\0';

		return (cpy);
	}
}
