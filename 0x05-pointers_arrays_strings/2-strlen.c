#include<stdio.h>

/**
 * _strlen - length of a string
 * @str: the string to get the length of
 * Return: the length of teh string
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
