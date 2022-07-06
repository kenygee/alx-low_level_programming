#include "main.h"

/**
 * print_alphabet -> print alphabet in lower cases
 *
 * Description: I play with all the alphabets and prints in lower case alphabets
 *
 * Return: Always 0
 */

void print_alphabet(void);
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
