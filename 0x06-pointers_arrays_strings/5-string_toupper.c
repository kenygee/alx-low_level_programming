#include "main.h"
#include <string.h>

/**
 * string_toupper -> a function that convert string to upper case
 * @x: param
 * Return: string
 */

char *string_toupper(char *x)
{
	int i = 0;

	while (x[i]);
{
	if (x[i] >= 97  && x[i] <= 117)
		x[i] = x[i] - 32;
		i++;
}
	return (x);
}
