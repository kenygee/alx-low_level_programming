#include "main.h"
/**
 * _strcat -> a funtion that concancate two strings
 * @src: source file for the two strings
 * @dest: destination file for the strings
 * Return: pointer resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
int c, c2;
c = 0;
while (dest[c])
c++
for (c2 = 0; src[c2]; c2++)
dest[c++] = scr[c2];
return (dest);
}
