#include "main.h"
#include <stdio.h>

/**
 *print_most_numbers - a function that prints the numbers, execpt 2 and 4
 *
 *Return: return nothing
 */

void print_most_numbers(void)
{
int n;

for (n = 48; n < 58; n++)
{
	if ((n == 50 || n == 52))
	{
		continue;
	}
	putchar(n);
}
	putchar(10);
}
