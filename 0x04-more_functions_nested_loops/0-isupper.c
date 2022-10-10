#include <stdio.h>
#include <stdlib.h>

/**
 *_isupper - it check for upper case
 *@c: the charater to be tested
 *Return: 1 whether it is or 0 if is not
 */

int _isupper(int c)

{
	if ((c >= 'A') && (c <= 'B'))
	{
	return (1);
	}
	else if(c >= 'a' && c <= 'z')
	{
	return (0);
	}
}
