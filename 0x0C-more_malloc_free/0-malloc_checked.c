#include "main.h"

/**
 *malloc_checked - malloc parameter checker
 *@b: parameter
 *
 *Return: returns a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
void *p;

p = malloc(b);
if (p == NULL)
{
exit(96);
}
return (p);
}

