#include "main.h"
/**
 * main - returns successful when executed
 * print_alphabet - prints the alphabet  allocated
 * Return: always 0
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

}
