#include <stdio.h>

/**
*main - print that piece of art is useful, Dora Korpar, 2015-10-19
*Description: 'a C program that prints exactly the above words'
*Return: return 1 success
*/

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 61);
	return (1);
}
