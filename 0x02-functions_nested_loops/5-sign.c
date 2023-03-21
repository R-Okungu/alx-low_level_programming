#include "main.h"
#include<stdio.h>

/**
 * print_sign - function that prints function
 * @n: function parameter used
 * Return: 1 0 and -1 when successful
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (-2);
}
