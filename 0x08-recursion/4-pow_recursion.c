#include "main.h"

/**
 * _pow_recursion - returns a value
 * @x: input
 * @y: input
 * Return: returns when successful
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
