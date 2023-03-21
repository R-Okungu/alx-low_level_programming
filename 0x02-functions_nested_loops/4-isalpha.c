#include "main.h"

/**
 * _isalpha - function that checks the alphabet
 * @c: parameter to be checked
 * Return: it is 1 when successful and 0 when not
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
