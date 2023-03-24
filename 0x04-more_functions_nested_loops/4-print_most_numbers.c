#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - print the number 0 to 9
 * Description: print he numbers excluding 2 and 4
 * Return: always 0
 */

void print_most_numbers(void)
{
	char x = 0;

	for (x = '0'; x <= '9'; x++)
	{
		if (!(x == '2' || x == '4'))
			_putchar(x);
	}
	_putchar('\n');
}
