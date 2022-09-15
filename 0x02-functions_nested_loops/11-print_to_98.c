#include "main.h"

/**
 * print_to_98 - prints all possible different combinations of three digits
 *		in other seperate with commafollowed by a space.
 * @n: the number to begin counting at
 *
 * Return:  success 0
 */

void print_to_98(int n)
{

	if (n >= 98)
	{
	while (n > 98)
		printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
