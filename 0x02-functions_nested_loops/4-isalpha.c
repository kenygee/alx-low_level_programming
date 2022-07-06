#include "main.h"

/**
 * _isalpha -> this check for alphabet charater
 * @c: a charater to be checked
 * Return: Always return 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
