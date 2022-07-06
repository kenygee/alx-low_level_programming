#include "main.h"

/**
 * main - a function that prints 10 times the alphabet, in lowercase
 * print_alphabet_x10 -> print 10 times the alphabet
 * Description: as above
 * Return: always return 0
 */

void print_alphabet_x10(void)
{
	int j;
	int x;

	for (x = 0; x < 10; x++)
		{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		}
}
