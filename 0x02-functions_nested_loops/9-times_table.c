#include "main.h"

/**
 * times_table -> print times table starting from 1
 * x = row, y = column, d = digits of current resultn your time table
 * Reture: time table
 */

void times_table(void)
{
int x, y, d;

	for (x = 0; x < 10; x++)
	{
	_putchar('0');
	_putchar(',');
	_putchar(' ');
	}
	for (y = 0; y < 10; y++)
	{
	d = (x * y);
	if ((d / 10) > 0)
	{
	_putchar((d / 10) + '0');
	}
	else
	{
	_putchar(' ');
	}
	_putchar((d % 10) + '0');
	if (y > 0)
	{
	_putchar(',');
	_putchar(' ');
	}
	_putchar('\n');
	}
}
