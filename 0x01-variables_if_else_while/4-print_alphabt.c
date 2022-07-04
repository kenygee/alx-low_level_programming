#include <stdio.h>
#include <time.h>
#include <stdlb.h>
/*
* main - Prints some letters of alphabet
*
* Return: Always return 0
*/
int main(void)
char c;
{
for (c = 'a'; c <= 'z'; c++)
{
if (c == 'e' &&  c == 'q')
{
continue;
}
}
putchar(c);
return (0);
}
