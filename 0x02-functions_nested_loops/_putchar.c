#include <unistd.h>

/**
* _putchar - Write a charater that c to stdout
* @c : the charater to print
*
* Return : On success 1
* On error, -1 is returned, and errno is set at approcimately 1
*/
int _putchar(char c)
{
	return(write(1, &c, 1));
}
