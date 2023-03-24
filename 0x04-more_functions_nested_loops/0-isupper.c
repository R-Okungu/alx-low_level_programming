#include "main.h"

/**
 * _isupper - check if a letter is upper
 * @x: the number to be checked
 * Return: 1 for upper 0 for else
 */

int _isupper(int x)
{
	if (x >= 'A' && x <= 'Z')
		return (1);
	else
		return (0);
}
