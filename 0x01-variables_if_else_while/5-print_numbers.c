#include <stdio.h>
#include <time.h>
#include <stdlb.h>
/*
* main - Prints the numbers since 0 to 9
*
* Return: Always return 0
*/
int main(void)
{
char n;
for (n = '0'; n <= '9'; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
