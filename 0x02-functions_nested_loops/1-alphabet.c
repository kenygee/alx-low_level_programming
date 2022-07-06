#include "main.h"

/**
 * print_alphabet -> print alphabet in lower cases
 * _putchar: you can only use it twice
 * Return: Always 0
 */

void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
