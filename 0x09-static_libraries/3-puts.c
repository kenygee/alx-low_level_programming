#include "main.h"

/**
 * _puts -> a function to print a string
 *@str: stings printing
 *Return: success 0
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
