#include "main.h"

/**
 * print_last_digit: print the last digit
 * @n: It is the last digit
 * Return: parament
 */

int print_last_digit(int n)
{
	if (n < 0)
	n = -n;
	return (n % 10);
}
