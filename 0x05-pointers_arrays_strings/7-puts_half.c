#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: string to be printed
 * Return: nothing
 */

void puts_half(char *str)
{
	int k;
	int j = 0;

	while (str[j] != '\0')
	{
	j++;
	}
	if (j % 2 == 1)
	{
	k = (j - 1) / 2;
	k += 2;
	}
	else
	{
	k = j / 2;
	}
	for (; k < j; k++)
	{
	_putchar(str[k]);
	}
	_putchar('\n');
}
