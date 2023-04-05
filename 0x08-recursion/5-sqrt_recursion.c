#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - natural square root of a number
 * _sqrt - calculates natural square root
 * @i: iterate number
 * @n: the number
 * Return: a value when successful
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
